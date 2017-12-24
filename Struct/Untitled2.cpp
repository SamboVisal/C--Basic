#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct movie{
	string title;
	int year;
};
main(){
	
	string myst;
	
	movie amovie;
	movie *pmovie;
	pmovie = &amovie;
	
	cout << "Enter title: "; getline (cin, pmovie->title);
	cout << "Enter year: "; getline(cin,myst);
	(stringstream) myst >> pmovie->year;
	
	cout << "You have entered\n";
	//arrow key for pointer
	cout << pmovie->title;
	cout << (*pmovie).year;
	
}
