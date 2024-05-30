#include <OldMoney.hpp>


OldMoney::OldMoney(int p, int s, int d){
	this->p = p;
	this->s = s;
	this->d = d;

	cout << "Constructed new OldMoney object" << endl;
}

OldMoney::~OldMoney(){
	cout << "Destructed OldMoney object" << endl;
}

void OldMoney::setValues(int p , int s, int d){
	if (s >= 20 || s < 0 || d >= 12 || d < 0){
		cerr << "Invalid old money values" << endl;
		exit(1);
	} 
	this->p = p;
	this->s = s;
	this->d = d;
}

void OldMoney::printValue(void){
	cout << "£" << p << "." << s << "s" << "." << d << "d" << endl;
}

void OldMoney::setDecimal(float f){
	string asString;
	string decimals;
	stringstream out;
	
	out << fabs(f);
	asString = out.str();
	decimals = asString.substr(asString.find(".")+1);
	
	if (decimals.length() > 2) {
		cerr << "New money value has too many digits to convert into old money" << endl;
		exit(1);
	}
	
	int asPence = f * 240;
	p = int(asPence / 240);
	asPence -= p * 240;
	s = int(asPence / 12);
	d = asPence - (s * 12);
}
