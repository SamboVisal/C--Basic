#include<iostream>
using namespace std;
int integer(int a, int b){
	int r = a*b;
	return r;
}
int Float(float c,float d){
	int r = c+d;
	return r;
	
}
main(){
	
	int a = 10,b=20;
	float c = 40.5,d=20.5;
	cout << "Integer ";
	cout << integer(a,b);
	cout << "Float ";
	cout << Float(c,d);
}
