#include <iostream>
using namespace std;
	
class Distance{
	private: 
		int feet;		
		int inches;
	public:
		Distance(int f, int i){
			feet = f;
			inches = i;
		}	
		void Display(){
		cout << "F: " << feet << " I: " << inches << endl;
		}
		Distance operator-(){
			return Distance(-feet,-inches);
		}
};
main(){
	
	Distance D1(11,10), D2(-5,11);
	-D1;
	D1.Display();
	-D2;
	D2.Display();
	return 0;
	
}	

