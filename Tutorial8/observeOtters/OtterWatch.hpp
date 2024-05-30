#ifndef __OTTERWATCH__
#define __OTTERWATCH__

#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

class OtterWatch
{
      string   otterName;
      string   spottedAt;
   public:
      virtual void publish      (string alert)   // note the virtual
                   { cout << "[OtterWatch.publish()]" << endl; };

      void         publishNews  ();
      void         otterSpotted (string);
};

#endif
