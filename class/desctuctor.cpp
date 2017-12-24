#include <iostream>
using namespace std;

class Line{
	public:
		void setLength(double len);
		double getLength();
		Line(); // this is constructor
		~Line(); // this is destructor
	private:
		double length;
};
Line::Line(){
	cout << "This is the constructor " << endl;
}
Line::~Line(){
	cout << "This is the distructor " << endl;
}
void Line::setLength(double len){
	length = len;
}
double Line::getLength(){
	return length;
}
main(){
	
	Line line;
	line.setLength(7.5);
	cout << "The value is " << line.getLength() << endl;
}

