#include <iostream>
using namespace std;

enum fuck{
	koko = 0, kaka = 10, lolo = 20, lala = 30
};

main(){
	fuck k;
	k = kaka;
	cout << sizeof(k);
}
