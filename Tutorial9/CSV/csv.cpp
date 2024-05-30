#include <csv.hpp>

const char * CharFException::what() const throw(){
	return "Character 'F' in char field of CSV\n";
}

void writeCSVFile(const string filename, string s, char c, int n, float f){
	ofstream outFile;
	
	outFile.open(filename, ios::out | ios::app);
	if (!outFile.is_open()){
		cerr << "Could not write to file: " << filename << endl;
		return;
	}

	outFile << s << ',' << c << ',' << n << ',' << f << endl;

	outFile.close();
}

void readCSVFile(const string filename) throw(CharFException){
	ifstream inFile(filename);

	if (!inFile.is_open()){
		cerr << "Could not read from file: " << filename << endl;
		return;
	}
	
	inFile.exceptions(ios::eofbit);

	try {
		while (true) {
			string line;	
			string s;
			char c;
			int n;
			float f;

			getline(inFile, line);
			stringstream ss(line);

			getline(ss, s, ',');
			ss >> c;
			ss.ignore(1);
			ss >> n;
			ss.ignore(1);
			ss >> f;
			
			if (c == 'F')
				throw CharFException();

			cout << "String: " << s << " Character: " << c << " Integer: " << n << " Float: " << f << endl;
		}	
	} catch (ifstream::failure e) {
		cout << "reached end of file" << endl;
	} catch (exception &e) {
		cout << "Closing File" << endl;
		inFile.close();
		throw;
	}
	cout << "Closing File" << endl;
	inFile.close();		
}

int main(void){
	string filename = "text.CSV";
	cout << "---WRITING TO FILE---" << endl;
	writeCSVFile(filename, "elephants are big", 'X', 43, 12.56);
	writeCSVFile(filename, "tardigrades are small", 'A', 99, 1456.1);
	writeCSVFile(filename, "penguins are middle-sized", 'F', 1, 0.001);
	cout << "---READING FROM FILE---" << endl;
	try {
		readCSVFile(filename);
	} catch (CharFException &e) {
		cerr << e.what() << cout;
		return (1);
	}
}
