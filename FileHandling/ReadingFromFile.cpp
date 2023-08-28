#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	fstream myfile;
	string line;
	myfile.open("Bilal.txt", ios::in);	
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			cout << line << endl;
		}
		myfile.close();
	}

}