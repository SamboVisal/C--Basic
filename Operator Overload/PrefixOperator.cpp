#include <iostream>
using namespace std;

class Check{
	
	public:
		int i;
	public:
		Check(): i(0){
		}
		Check operator ++(){
			Check t;
			++i;
			t.i = 2;
			return t;
		}
		void display(){
			cout << "I =" << i << endl;
		}
	
};

main()
{
	Check ob,ob1;
	ob.display();
	ob1.display();
	
	ob1=++ob;
	
	ob.display();
	ob1.display();
}
