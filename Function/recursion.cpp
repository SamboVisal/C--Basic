#include <iostream>
using namespace std;

long factorial(long a){
	
	if(a>1)
	return (a * factorial(a-1));
	else
	return 1;
	
}
main(){
	
	long number,d;
	
	cout << "Enter number to factorial "; cin >> number;
	d=factorial(number);
	cout << "The factorial is " << d;
}
