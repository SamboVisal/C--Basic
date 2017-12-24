#include <iostream>
using namespace std;

main(){
	int num,tem,re,result=0;
	cout << "Enter positive "; cin >> num;
	tem = num;
	while(num!=0){
		
		re = num%10;
		result = result + re*re*re;
		num/=10;
	}
	if(tem==result)
	cout << "This armstrong number";
	else
	cout << "This is not armstrong number";
}
