#include <iostream>
using namespace std;

class print{
	
	public:
		void data(int a){
			cout << "The value a is " << a << endl;
		} 
		void data(double b){
			cout << "The value b is " << b << endl;
		}
		void data(char *c){
			cout << "The sentences is " << c;
		}
};
main(){
	
	print p;
	p.data(10);
	p.data(20.5);
	p.data("Hello Bitch!");
}
