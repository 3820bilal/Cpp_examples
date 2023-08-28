#include<iostream>
using namespace std;

class AbstractEmployee {
	//pure virtual function
public:
	virtual void AskforPromotion() = 0;
};
class Employee:AbstractEmployee {
private:
	string Company;
	int		Age;
protected:
	string Name;
public:
	
	//constructor
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
	
	//Encapsulation
	//setter and getter method: It is used to acces private member of class outside the class
	void setName() {
		cout << Name << endl;
	}
	string getName() {
		return Name;
	}
	void setCompany() {
		cout << Company << endl;
	}
	string getCompany() {
		return Company;
	}
	void setAge() {
		cout << Age << endl;
	}
	int getAge() {
		return Age;
	}

	void IntroduceYourself() {
		cout << Name << " is owner of " << Company << endl;
	}

	void AskforPromotion() {
		cout << Name << " is promoted" << endl;
	}

	virtual void Work() {
		cout << Name << " work as employee." << endl;
	}
};

class Developer:public Employee {
public:
	string FavProgLanguage;
	Developer(string name, string company, int age, string favProgLanguage) : Employee (name,company,age)
	{
		FavProgLanguage = favProgLanguage;
	}

	void FixBugs() {
		cout << Name << " fixed bugs." << endl;
	}

	void Work() {
		cout << Name << " work as software developer." << endl;
	}
};

class Teacher : public Employee {
public:
	string Subject;
	Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
	{
		Subject = subject;
	}

	void TeachLesson() {
		cout << Name << " is teaching "<< Subject << endl;
	}

	void Work() {
		cout << Name << " work to teach students in college." << endl;
	}
};

int main() {
	Employee emp1 = Employee("Bilal","SparkStack",23);

	//getter method
	cout << emp1.getName() << endl;

	emp1.IntroduceYourself();
	emp1.AskforPromotion();

	Developer dvlpr = Developer("Bilal", "SparkStack", 23,"Python");
	dvlpr.FixBugs();


	Teacher t = Teacher("Bilal","SparkStack",23,"DSD");
	t.TeachLesson();

	//polymorphism
	t.Work();
	dvlpr.Work();

	Employee* e1 = &dvlpr;
	Employee* e2 = &t;

	/*t.Work();
	dvlpr.Work();*/
}
