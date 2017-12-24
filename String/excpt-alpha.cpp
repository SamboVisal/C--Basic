#include <iostream>
using namespace std;

main(){
	int j;
	char name[100];
	cout << "Enter string "; cin.get(name,100);
	for(int i=0; name[i]!='\0';i++){
		if(!((name[i]>='a'&&name[i]<='z')|| (name[i]>='A'&&name[i]<='Z'))){
			for(int j=i; name[j]!='\0';j++)
			name[j]=name[j+1];
		}
		//name[j]='\0';
	}
	
	cout << "The result is " << name;
}
