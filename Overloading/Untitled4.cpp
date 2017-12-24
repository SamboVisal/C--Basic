#include <iostream>
using namespace std;

void output(char = '&' , int = 1);
main(){
	
	cout << "No argument ";
	output();
	cout << "There is first argument ";
	output('%');
	cout << "Both arguments ";
	output('$',5);
}
void output(char d, int n){
	int i;
	for(i=0;i<n;i++){
		cout << d;
	}
	cout << "\n";
	
}
