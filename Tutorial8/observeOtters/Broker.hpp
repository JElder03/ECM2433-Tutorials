#ifndef __BROKER__
#define __BROKER__

#include <Subscriber.hpp>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Broker
{
      vector<Subscriber> membership;
   public:
      void publish   (string);
      void subscribe (Subscriber);
};

#endif
