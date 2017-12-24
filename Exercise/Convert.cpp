#include<iostream>

using namespace std;

main(){
	
	int a,c;
	float b = 4.5;
	a = (int) b;
	c = int (b);
	cout << a << " " << c << endl;
	a = sizeof(char);
	cout << a << endl;
	a = 5 + 7 %2;
	cout <<a;
}
