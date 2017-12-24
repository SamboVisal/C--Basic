#include <iostream>
using namespace std;
int addition(int a,int b){
	return (a+b);
}
int substraction(int a,int b){
	return (a-b);
}
int Operator(int x,int y,int (*functional) (int,int)){
	int g;
	g = (*functional) (x,y);
	return g;
}
main(){
//In the example, minus is a pointer to a function that has two parameters of type int. It is immediately assigned to
//point to the function subtraction, all in a single line:	
	int m,n;
	int (*minus)(int,int)= substraction;
	m = Operator (7,5,addition);
	n = Operator (20,m,minus);
	cout << n << endl << m;
	
}
