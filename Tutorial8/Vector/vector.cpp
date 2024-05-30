
#include <iostream> 
#include <vector> 
using namespace std;   

int main(void) 
{ 
	vector<int> a;

	for (int i = 1; i <=7 ; i++) 
		a.push_back(i); 

     
	cout << "Output of begin and end Function: "; 
	for (auto i = a.begin(); i != a.end(); ++i) 
		cout << *i << " "; 
   
 	cout << "\nOutput of cbegin and cend Function: "; 
	for (auto i = a.cbegin(); i != a.cend(); ++i) 
		cout << *i << " "; 
   
  
	cout << "\nOutput of rbegin and rend Function: "; 
	for (auto ir = a.rbegin(); ir != a.rend(); ++ir) 
		cout << *ir << " "; 


	cout << "\nOutput of crbegin and crend Function: "; 
	for (auto ir = a.crbegin(); ir != a.crend(); ++ir) 
		cout << *ir << " "; 
  
	cout << "\nsize: " << a.size() << endl;
	cout << "maxSize: " << a.max_size() << endl;
	cout << "capacity: " << a.capacity() << endl;
	cout << "empty: " << a.empty() << endl;
	a.shrink_to_fit();
	cout << "size: " << a.size() << endl;
	a.reserve(10);
	cout << "size: " << a.size() << endl;
	a.resize(10);
	cout << "size: " << a.size() << endl;
	cout << "capacity: " << a.capacity() << endl;
	cout << "maxSize: " << a.max_size() << endl;
	return 0; 
}
