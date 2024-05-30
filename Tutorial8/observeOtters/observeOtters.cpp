#include <Subscriber.hpp>
#include <OtterBroker.hpp>
#include <OtterWatch.hpp>
#include <iostream>
using namespace std;

int main ()
{
   cout << "\n-------------------- Create subscribers ----------------------------\n";
   Subscriber s1("Bloggs");
   Subscriber s2("Smith");

   cout << "\n-------------------- Create the OtterWatch Broker ------------------\n";
   OtterBroker  obs;
   OtterWatch  *cricklepitMill = &obs;

   cout << "\n-------------------- Add two subscribers to the OtterWatch broker --\n";
   obs.subscribe(s1);
   obs.subscribe(s2);

   cout << "\n-------------------- Spot one otter: Opal --------------------------\n";
   obs.otterSpotted("Opal");
   
   cout << "\n-------------------- Spot another otter: Ophelia -------------------\n";
   cricklepitMill->otterSpotted("Ophelia");
   
   return 0;
}
