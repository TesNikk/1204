#include<iostream>
using namespace std;
class A {
private:
	int ax;
public:
	A(int ax) {
		this->ax = ax;
	}
	int get_ax() {
		return ax;
	}
	~A() {
		cout << "Destructor of A is called" << endl;
	}
};
class B :public A {
private:
	int bx;
public:
	B(int ax, int bx):A(ax) {
		this->bx = bx;
	}
	int sum() {
		return bx + get_ax();
	}
	~B() {
		cout << "Destructor of B is called" << endl;
	}
};
int main() {
	B b(10, 20);
	cout << "sum= " << b.sum() << endl;
	return 0;
}