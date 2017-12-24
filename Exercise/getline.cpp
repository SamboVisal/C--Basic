#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{
string mystr;
int age;
cout << "What's your name? ";
getline (cin, mystr);
cout << "Hello " << mystr << ".\n";
cout << "Tell me your age "; cin >> age;
cout << age;
cout << "What is your favorite team? ";
fflush(stdin);
getline (cin, mystr);
system("cls");
system("pause");
cout << "I like " << mystr << " too!\n";
return 0;
}
