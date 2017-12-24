#include <iostream>
using namespace std;

class num{
	int a,b;
	public:
		void set(int k,int q);
		num(): a(5), b(10){}
		
		int get();
		int con(){
			return a *b;
		}
	private:
		int c,d;	
		
};

void num::set(int k, int q){
	c = k; d = q;
}
int num::get(){
	return c*d;
}
main(){
	num n;
	int i,o;
	cout <<"Enter numbers " ; cin >> i >> o ;
	n.set(i,o);
	cout << " The result " << n.get();
	cout << "\nThe result no input " << n.con();
}
