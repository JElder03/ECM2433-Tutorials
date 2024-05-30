#include <OtterWatch.hpp>

void OtterWatch::publishNews ()
{
   cout << "OtterWatch: otter " << otterName << ", spotted at " << spottedAt << endl;
   publish(otterName + " spotted at " + spottedAt);
}

void OtterWatch::otterSpotted (string otterName)
{
   time_t now = time(0);     // current date/time based on current system
   char* dt = ctime(&now);   // convert now to string form
   dt[strlen(dt)-1] = '\0';  // remove trailing newline character

   this->otterName = otterName;
   this->spottedAt = dt;
   publishNews();
}
