#include<iostream>
#include<string>
using namespace std;

main(){
	
	char name;
	int i;
	
	cout << "Please Enter Username : "; cin >> name; //getline(cin,name);
	cout << "Please Enter Password : "; cin >> i ;  //getline(cin,i);
	if( name = 'a'){
		if( i == 1997 )
		cout << "Login Successfully";
		else 
		cout << "Wrong password";
	}
	else
	cout << "Wrong username";
	
}
