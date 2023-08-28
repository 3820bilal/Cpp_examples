#include<iostream>
using namespace std;

class Employee {
	//constructor
private:
	string Name;
	string Company;
	int Age;
public:
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		Age = age;
	}
	int getAge() {
		return Age;
	}
	void IntroduceYourself() {
		cout << "Name    is: " << Name << endl;
		cout << "Company is: " << Company << endl;
		cout << "Age	 is: " << Age << endl;
	}
};

int main() {
	Employee emp1 = Employee("Bilal", "SparkStack", 23);
	//emp1.IntroduceYourself();
	emp1.setAge(33);
	cout <<"My name is"<< emp1.getName() <<"my age is: " << emp1.getAge()<<"and I worked in"<<emp1.getCompany() << endl;
}