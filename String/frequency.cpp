#include <iostream>
#include <string>
using namespace std;

main(){
	
	string name;
	char s;
	int count;
	cout << "Enter String to find " << endl; getline(cin,name);
	fflush(stdin);
	cout << "Here are the string: " << name << endl;
	cout << "Enter a character to find " << endl ;
	cin >> s;
	for(int i=0; i < name.size(); i++){
		if (name[i] == s){
			count++;
		}
	}
	cout << "number of frequency is " << count << endl;
	count=0;
	cout << "enter another character " << endl; cin >>s;
	for(int i=0; name[i]!= '\0';i++){
		if(name[i]==s){
			count ++;
		}
	}
	cout << "the 2nd frequency is " << count;
}
