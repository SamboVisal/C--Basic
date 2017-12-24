#include <iostream>
using namespace std;

class shape{
	public:
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
	protected:
		int width,height;	
};
class formula: public shape{
	
	public:
		int Output(){
			return width*height;
		}
};
main(){
	formula rect;
	int ww,hh;
	cout << "Input Width "; cin >> ww;
	rect.setWidth(ww);
	cout << "Input Height "; cin >> hh;
	rect.setHeight(hh);
	cout << "The result is ";
	cout << rect.Output();
}
