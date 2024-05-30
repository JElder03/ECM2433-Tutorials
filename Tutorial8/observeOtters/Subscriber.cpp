#include <Subscriber.hpp>

Subscriber::Subscriber (string name)
{
   this->name = name;
   cout << "Subscriber: " << this->name << " created." << endl;
}
   
string Subscriber::getName ()
{
   return this->name;
}
   
void Subscriber::notify (string alert)
{
   cout << ">>> Subscriber: " << this->name << ". Alert received: " << alert << endl;
}
