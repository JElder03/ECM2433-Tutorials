#ifndef __OTTERBROKER__
#define __OTTERBROKER__

#include <Broker.hpp>
#include <OtterWatch.hpp>
#include <string.h>
using namespace std;

class OtterBroker: public Broker, public OtterWatch
{
   public:
   void publish (string alert)
   {
      Broker::publish(alert);
   }
};

#endif
