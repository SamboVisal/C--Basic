#include <iostream>
using namespace std;
class Rectan{
	
	private:
		int length;
		int breadth;
	public:
		Rectan(): length(5), breadth(10){
			cout << "We the best music\n";
		}
		Rectan(int a, int b): length(a), breadth(b){}
	void Getlength()
		{
			cout << "Enter Length and Breadth "; 
			cin >> length >> breadth;
		}
	int Calcu()
		{
			return length * breadth;
		}
	void display(int temp)
		{
			cout << "The result is " << temp << endl;
		}
	
};
main()
{
	
	Rectan a1,a2(2,3);
	int temp;
	cout << "Default with no argument " << endl;
	temp = a1.Calcu();
	a1.display(temp);
	cout << "Area with arguments " << endl;
	temp = a2.Calcu();
	a2.display(temp);
}
