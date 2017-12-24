#include <iostream>
#include <string>
using namespace std;
void dis(char name[]);
void dis(string k);
main(){
	char name[100];
	string k;
	cout << "Enter name " << endl;
	cin.get(name,10);
	fflush(stdin);
	cout << "Enter k " << endl;
	getline(cin,k);
	dis(name);
	dis(k);
}
void dis(char name[]){
	cout << "The name is " << name << endl;
}
void dis(string k){
	cout << "the k is " << k;
}

