#include <iostream>
using namespace std;

main(){
	
	char name[100];
	int vowel,cons,num,space;
	vowel=cons=num=space=0;
	cout << "Enter string to count all "; cin.get(name,100);
	for(int i=0; name[i]!='\0'; i++){
		
		if(name[i]=='a' || name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'|| name[i]=='A'
		|| name[i]=='U'|| name[i]=='O'|| name[i]=='I'|| name[i]=='E')
		vowel++;
		else if(name[i]>'a' && name[i]<'z' || name[i]>'A' && name[i]<'Z')
		cons++;
		else if(name[i]=='0' && name[i]=='9')
		num++;
		else if(name[i]==' ')
		space++;
	}
	cout << "The vowel contain " << vowel << endl;
	cout << "The consonant contain " << cons << endl;
	cout << "The number contain " << num << endl;
	cout << "The space contain " << space;
}
