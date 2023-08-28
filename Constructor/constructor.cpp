#ifdef debug
#include<iostream>
using namespace std;

class Employee {
public:
	string Name;
	string Company;
	int Age;
	//constructor
	Employee(string name,string company, int age ) {
		Name = name;
		Company = company;
		Age = age;
	}
	void IntroduceYourself() {
		cout << "Name    is: " << Name << endl;
		cout << "Company is: " << Company << endl;
		cout << "Age	 is: " << Age << endl;

	}
};

int main() {
	Employee emp1 = Employee("Bilal","SparkStack",23);
	emp1.IntroduceYourself();
}
#endif