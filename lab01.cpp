#include<iostream>
#include<math.h>
using namespace std;
class Triangle {
private:
	int a, b, c;
public:
	Triangle (int x,int y,int z) {
		a=x;
		b=y;
		c=z;
	}
	void get() {
		cout << "A = " << a << " B = " << b << " C = " << c << endl;
	}
	double area() {
		double s;
		s = (a + b + c) / 2.0;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	int perimeter() {
		return  a + b + c;
	}

};
int main(){
	Triangle t1(3,4,5);
	t1.get();
	double A=t1.area();
	double P = t1.perimeter();
	cout << "AREA: " << A << endl;
	cout << "Perimeter: " << P << endl;
	return 0;
}