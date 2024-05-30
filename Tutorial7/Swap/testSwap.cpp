#include <swap.hpp>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
	if (argc != 3){
		cerr << "Icorrect number of arguments provided" << endl;
		return 1;
	}

	int a = stoi(argv[1]);
	int b = stoi(argv[2]);
	
	cout << "Initial a: " << a << endl;
	cout << "Initial b: " << b << endl;
	
	swap(a, b);

	cout << "Final a: " << a << endl;
	cout << "Final b: " << b << endl;

	return 0;
}
