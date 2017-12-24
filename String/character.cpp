#include <iostream>
using namespace std;

main(){
	
	char question [] = "Hello! What is your name ? ";
	char greeting []= "Hello! ";
	char name[100];
	cout << question << endl;
	cout << "Enter name here : "; cin >> name;	
	cout << "Your name is " << name;
}
