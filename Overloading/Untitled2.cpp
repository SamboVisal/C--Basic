#include <iostream>
using namespace std;
int d(int);
float d(float);
main(){
	
	int a = -5; float b = -6.7;
	cout << "The value of a is " << d(a)  << endl;
	cout << "The value of b is " << d(b)  << endl;
}
int d(int var){
	if(var < 0 )
		var = -var;
	return var;
}
float d(float var1){
	if(var1 < 0)
		var1 = var1;
		return var1;
}
