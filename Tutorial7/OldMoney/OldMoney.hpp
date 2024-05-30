#ifndef __OLDMONEY_HPP
#define __OLDMONEY_HPP

#include <math.h>
#include <iostream>
#include <sstream>
using namespace std;

class OldMoney {
	int p;
	int s;
	int d;

public:
	OldMoney(int = 0, int = 0, int = 0);
	~OldMoney(void);
		
	void setValues(int, int, int);
	void printValue(void);
	void setDecimal(float);
};

#endif
