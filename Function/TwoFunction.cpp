#include<iostream>
using namespace std;
int fuck(int& h,int& j);
int addition(int x,int y);
int substract(int x,int y);
main(){
	
	int x=5,y=15;
	int r,d; int h=2,j=6;
	r = substract(7,4) -1;
	cout << "The first substract is " << r << endl;
	r = 4+addition(y,x);
	cout << "The addition is " << r << endl;
	fuck(h,j);
	cout << h << endl << j;
}

int substract(int x,int y){
	
	int sum = 0;
	sum = x-y;
	return (sum);
	
}
int addition(int x,int y){
	
	int sum = 0;
	sum = x+y;
	return (sum);
	
}
int fuck(int& h,int& j){
	
	int tem;
	tem = h; h=j; j=tem;
	
}
