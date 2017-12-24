#include <iostream>
using namespace std;

class Line{
	public:
		void setLength(double len);
		double getLength();
		Line(); // this is the constructor
		public:
			double length;
};
Line::Line(){
	cout<< "Object is being created \n";
}
void Line::setLength(double len){
	length = len;
}
double Line::getLength(){
	return length;
}
int main(){
	Line line;
	line.setLength(7.0);
	cout << "The length is " << line.getLength();
}
