#include <iostream>
using namespace std;

class person{
	
	public:
		string professor;
		int age;
	person(): professor("Unemployed"),age(16)
	{
		cout<< "The job is " << professor << endl;
		cout<< "The age is " << age << endl;
	}
	void display()
	{
		cout << "Your professor is " << professor << endl;
		cout << "The age is " << age << endl;
		walk();
		talk();	
	}	
	void walk()
	{
		cout << "I can walk" << endl;
	}
	void talk()
	{
		cout << "I can talk\n";
	}
};
class mathteacher : public person
{
	public:
		void math()
		{
		cout << "I am math teacher\n";
		}	
};
class football : public person
{
	public:
		void footb()
			{
				cout << "I can play soccer\n";
			} 	
};
main()
{
	//Both MathsTeacher and Footballer can access all data members and member functions of Person.
//	However, MathsTeacher and Footballer have their own member functions as well: 
//	teachMaths() and playFootball() respectively. These functions are only accessed by their own class.
	mathteacher math;
	math.professor = "Teacher";
	math.age = 23;
	math.display();
	math.math();
	football foot;
	foot.professor = "Footballer";
	foot.age = 20;
	foot.display();
	foot.footb();
}
