#include <iostream>
using namespace std;

class Line{
	public:
		void setLength(double len);
		double getLength();
		Line(double len); //this constructor
		private:
			double length;
};
Line::Line(double len){
	cout << "The construct is being created, length is " << len << endl;
	length = len;
}
void Line::setLength(double len){
	length = len;
}
double Line::getLength(){
	return length;
}
main(){
	Line line(10.0); double ne;
	cout << "Length of line " << line.getLength() << endl;
	cout << "Input New Line "; cin >> ne;  
	line.setLength(ne);
	cout << "Length of line " << line.getLength() << endl;
	line.setLength(20.5);
	cout << "Length of line " << line.getLength();
}
