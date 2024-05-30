#ifndef __SUBSCRIBER__
#define __SUBSCRIBER__

#include <iostream>
#include <string.h>
using namespace std;

class Subscriber
{
      string name;
   public:
      Subscriber     (string);
      string getName ();
      void   notify  (string);
};

#endif
