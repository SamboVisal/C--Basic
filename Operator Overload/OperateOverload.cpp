#include <iostream>
using namespace std;

class Test{
	
	private:
		int count;
	public:
		Test(): count(1){
		}
		void operator --()
		{
			count = count-1;
		}
		void operator ++()
		{
			count = count + 1;
		}
		void Display(){
			cout << count;
		}
};
main()
{
	
	Test t;
	//this call "function void operator--()"
	++t;
	t.Display();
}
