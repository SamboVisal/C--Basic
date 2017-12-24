#include <iostream>
using namespace std;

class student{
	public:
		char name[20];
		int age,id;
};

main(){
	
	student object;
	
	cout << "Enter name "; cin >> object.name;
	cout << "Enter age ";  cin >> object.age;
	cout << "Enter ID "; cin >> object.id;
	cout << "This is information \n";
	cout << object.name << endl;
	cout << object.age << endl;
	cout << object.id;
	
}
