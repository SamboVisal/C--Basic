#include <iostream>
using namespace std;
//A class constructor is a special member function of a class that is executed 
//whenever we create new objects of that class.
class Rect{
	int width,height;
	public:
		Rect(int,int);
		int output(){
			return width*height;
		}
};
//no void... call function Rect() to use
Rect::Rect(int a,int b){
	width = a ;
	height = b;
	
}
main(){
	Rect ob(2,2);
	Rect ob1(7,5);
	
	//ob1.Rect(6,5);
	cout << "the first construct is " << ob.output();
	cout << " the second construct is " << ob1.output();
}
