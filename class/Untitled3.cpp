#include <iostream>

using namespace std;
class rectangle{
	
	int x,y;
	public:
		void set(int,int);
		int area (){
			return (x*y);
		}
};
//:: call function set() initialize the value
void rectangle::set(int a, int b){
	x=a;
	y=b;
}
main(){
	rectangle rect;
	rect.set(4,5);
	cout << "The value is " << rect.area();
}
