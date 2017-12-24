#include <iostream>
using namespace std;

class shape{
	
	public:
		setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
	protected:
		int width,height;	
};
class cost{
	
	public:
		int getCost(int p){
			return p * 70;
		}
};
class formula: public shape, public cost{
	
	public:
		int getA(){
			return (width*height);	
		}
};
main(){
	formula object;
	int p,ww,hh;
	cout << "Input Width "; cin >> ww;
	object.setHeight(ww);
	cout << "Input Height "; cin >> hh;
	object.setWidth(hh);
	p = object.getA();
	cout << "The area of rectangle " << p << endl;
	cout << "The total cost is " << object.getCost(p) << "$";
}
