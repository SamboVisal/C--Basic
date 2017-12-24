#include <iostream>
using namespace std;

main(){
	
	int num,tem,re,result=0;
	cout << "Enter number "; cin >> num;
	tem=num;
	while(num!=0){
		re = num%10;
		result = (result*10)+re;
		num/=10;
	}
	if(tem==result)
	cout << "this is palindrom";
	else
	cout << "this is no";
}
