#include <iostream>
using namespace std;

main(){
	
	int i,n,*p;
	cout << "How many number : " ; cin >> i;
//if it fails an exception is thrown	
	p= new (nothrow) int[i];
	if(p==0)
	cout << "Error! Memory Can not be allocated";
	else{
		
		cout << "\nEnter Those Number \n";
		for(n=0;n<i;n++){
		cin >> p[n];	
		}
		
	}
	cout << "Here are numbers \n";
	for(n=0;n<i;n++)
	cout << p[n];
	delete[] p;
	return 0;
	
}
