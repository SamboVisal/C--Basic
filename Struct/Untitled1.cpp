#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct movie{
	
	string title;
	int year;
	
}films[100];
void print(movie mo);
int main(){
	
	
	int i,n;
	string mystr;
	cout << "Input amount of movies "; cin >> i;
	
	for(n=0;n<i;n++){
	cout << "Enter title: "<<endl;
	getline (cin,films[n].title);
//	fflush(stdin);
	cout << "Enter year: ";
	getline (cin,mystr);
	stringstream(mystr) >> films[n].year;
	}
	cout << "The movies are \n";
	for(n=0;n<i;n++){
		print(films[n]);
		return 0;
	}
	
}
void print(movie mo){
	cout << mo.title << " " << mo.year << endl;
}
