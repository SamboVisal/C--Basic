#include<iostream>
using namespace std;
void show(int);
void show(double);
void show(double , int );
main(){
	int i=5; float a=4.5; 

	show(i);
	show(a);
	show(i,a);
	return 0;
}

void show(int n){
	cout << "The value of integer " << n << endl;
	
}
void show(double b){
	cout << "The value of float " << b << endl;
}
void show(double c, int d){
	
	cout << "The float and integer " << c << " " << d;
}
