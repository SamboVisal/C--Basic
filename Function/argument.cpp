#include<iostream>

using namespace std;

int func(int a,int b);
int main(){
	
	int a,b,d;
	cout << "Enter Number ";
	cin >>a>>b;
	d=func(a,b);
	cout << d;
}
int func(int a,int b){
	int sum;
	sum =a+b;
	return (sum);
	
}
