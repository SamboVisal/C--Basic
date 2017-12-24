//more than one returining value
#include<iostream>
using namespace std;
void pre(int& x,int& y,int& z);
main(){
	
	int x=100,y,z;
	pre(x,y,z);
	cout << "y " <<y <<" z" <<z; 	
}
void pre(int& x,int& y,int& z){
	y=x-1;
	z=x+1;
}

