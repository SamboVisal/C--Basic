#include <iostream>
using namespace std;

class Rectan{
	
	public:
		int length;
		int breadth;
	Rectan(): length(5),breadth(10){}
	int Rect()
	{
		cout << "Enter length and breadth ";
		cin >> length >> breadth;
	}
	Rectan Calcu(Rectan com1)
		{
			Rectan temp;
			temp.length  = length+com1.length;
			temp.breadth = breadth+com1.breadth;
			return temp;
		}
	void display()
		{
			cout << "The result is " << length << "+" << breadth << "!";
		}
	
};

main()
{
	
	Rectan c1,c2,c3,c4;
	int temp;
	c1.Rect();
	c2.Rect();
	c3 = c1.Calcu(c2);
	c3.display();
	cout << "The result with argument ";
	c4.display();
}
