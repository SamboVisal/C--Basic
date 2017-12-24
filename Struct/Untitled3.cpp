#include <iostream>
#include <sstream>
#include <string>
using namespace std;
struct movie{
	
	string title;
	int year;
}mine,yours;

void print(movie fuck);
main(){
	
	string m;
	mine.title = "Fast&Furious";
	mine.year  = 2017;
	
	cout << "Your favourite \n"; getline (cin,yours.title);
	cout << "The year \n"; getline(cin,m);
	stringstream(m) >> yours.year;
	cout << "My favourite is \n";
 	print(mine);
	cout << "Yours is \n";
	print(yours);
	
}
void print(movie fuck){
	
	cout << fuck.title << endl;
	cout << fuck.year;
}



