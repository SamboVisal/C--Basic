#include<iostream>
#include<string>
#include<sstream>

using namespace std;

main(){
	
	string mystr;
	float price=0;
	int qty=0;
	
	cout << "Enter Price : ";
	getline(cin,mystr);
	stringstream (mystr) >> price;
	cout << "Enter Quanlity : ";
	getline(cin,mystr);
	stringstream (mystr) >> qty;
	cout << "Total is " << price*qty << "$";
	
	return 0;
	
}
