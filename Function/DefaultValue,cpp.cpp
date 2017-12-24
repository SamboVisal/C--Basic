#include<iostream>
//default value in function
using namespace std;
int divide(int a,int b=2){
	b=2;
	int r;
	r=a/b;
	return (r);
}
main(){
	int a=12;
	cout << divide (a) << endl;
	cout << divide(20,4);
}
