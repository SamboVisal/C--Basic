#include <iostream>
using namespace std;
void count();
int main(){
	
	int i;
	cout << "The result is ";
	for(int i=0;i<5;i++){
		count();
	}
}
void count(){
	 int a=0;
	cout << a++;
}
