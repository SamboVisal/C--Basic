#include <iostream>
using namespace std;
int swap(int *a,int *b,int *c);
main(){
	int a,b,c;
	cout << "Enter any 3 numbers ";
	cin >> a >> b >> c;
	swap(&a,&b,&c);
	cout << "After swapping a: " << a << " ," << b << " ," << c; 

}
int swap(int *a,int *b,int *c){
	
	int tem;
	tem = *b;
	*b = *a;
	*a = *c;
	*c = tem;
}
