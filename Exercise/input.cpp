#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int age; 
	char name[100],sport[100];
	cout << "Please Input Age : "; 
	cin >> age;
	cout << "Please Input Name : "; 
	cin >> name;
	cout << "What is your favourite sport ? ";
	cin >> sport;
	//getline (cin, mystr);
	cout << "The name that u input was " << name << " and age was " << age << endl;
	cout << "Your favourite sport is " << sport;
	
	
	return 0;
}
