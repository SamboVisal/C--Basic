//passing parameter by reference
#include<iostream>
using namespace std;
void duplicate(int& a,int& b,int& c);
main(){
	
	int x=4,y=5,z=6;
	duplicate(x,y,z);
	cout << "X " << x << " Y " << y << " z" <<z;
	return 0;
}
void duplicate(int& a,int& b,int& c){
	
	a*=2;
	b*=2;
	c*=2;
	
}
