#include <Broker.hpp>

void Broker::publish (string alert)
{
   // cout << "[Broker.publish()]" << endl;
   vector<Subscriber>::iterator s = membership.begin();
   while ( s != membership.end() )
   {
      // cout << "[Broker: notify " << (*s).getName() << "]\n";
      (*s).notify(alert);
      s++;
   }
}

void Broker::subscribe (Subscriber s)
{
   membership.push_back(s);
   cout << "Broker: " << s.getName() << " subscribed." << endl;
}
