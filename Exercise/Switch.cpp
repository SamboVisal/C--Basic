#include<iostream>
#include<string>
//#include<conio>
using namespace std;

main(){
	char name[100];
	int num,age,id;
	do{
//	clrscr();
	cout << "1/Enter Information\n";
	cout << "2/Show Information\n";
	cout << "3/Delete Information\n";
	cout << "4/Search Information\n";
	cout << "5/Exit Program\n";
	cout << "Enter Number " ; cin >> num;
	switch(num){
	
    case 1: //clrscr();
			cout << "Enter Name "; cin >> name;
			cout << "Enter age "; cin >> age;
			cout << "Enter ID "; cin >> id;
			break;
    case 2: 
	
			break;
    case 3: 
	
			break;
    case 4: 
	
			break;
	case 5: break;		
    default : 	cout << "Wrong Input Sir\n";
    			//getch();
    		    break;
    	}

 }while(num!=5);
}
