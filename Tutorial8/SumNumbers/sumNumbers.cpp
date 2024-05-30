#include <sumNumbers.hpp>

template <typename T>
T sumNumbers(T x, T y) {
	return x + y;
}

int main(void){
	int a = 2;
	int b = 3;
	float c = 3.5;
	float d = 4.7;
	char e = 'a';
	char f = 'b';
	string g = "Hello ";
 	string h = "World!";
	
	cout << "Sum of " << a << " and " << b << ":" << endl;
	cout << sumNumbers(a,b) << endl;

	cout << "Sum of " << c << " and " << d << ":" << endl;
	cout << sumNumbers(c, d) << endl;
	
	cout << "Sum of " << e << " and " << f << ":" << endl;
	cout << sumNumbers(e, f) << endl;
	
	cout << "Sum of " << g << " and " << h << ":" << endl;
	cout << sumNumbers(g, h) << endl;
}
