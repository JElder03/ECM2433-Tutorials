#ifndef __CSV_HPP
#define __CSV_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class CharFException : public exception {
	public:
		virtual const char *what() const throw();
};

void writeCSVFile(const string, string, char, int, float);
void readCSVFile(const string) throw(CharFException);

#endif
