#include <iostream>
using namespace std;

void odd(int i);
void even(int i);
main(){
	int i;
	do{
		
		cin >> i;
		even(i);
		
	}while(i!=0);
}

void odd(int i){
	if(i%2!=0)
	cout << "This is odd number\n";
	else even(i);
}
void even(int i){
	
	if(i%2==0)
	cout << "This is even number\n";
	else odd(i);
}
