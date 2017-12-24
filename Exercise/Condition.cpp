#include<iostream>

using namespace std;

main(){
	
	int i;
	again:
	cout << "Please Input Number : "; cin >> i;
	if(i==1997){
		cout << "Login Succuessfully";
	}
	
	else
	{
	  
	cout << "Wrong Number Dude";
	goto again;
   }
	
}
