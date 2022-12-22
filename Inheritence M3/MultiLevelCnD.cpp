#include<iostream>
using namespace std;
class A {
private:
	int ax;
public:
	/*A() {
		cout << "Default constructor of A" << endl;
	}*/
	A(int ax) {
		this->ax = ax;
	}
	int get_ax() {
		return ax;
	}
	~A() {
		cout << "destructor of A is called" << endl;
	}
};
class B :public A {
private:
	int bx;
public:
	/*B() {
		cout << "Default constructor of B" << endl;
	}
	B(int bx) {
		this->bx = bx;
	}*/
	B(int ax, int bx) :A(ax) {
		this->bx = bx;
	}
	int get_bx() {
		return bx;
	}
	~B() {
		cout << "destructor of b is called" << endl;
	}
};
class C :public B {
private:
	int cx;
public:
	/*C() {
		cout << "Default constructor of c" << endl;
	}
	C(int cx) {
		this->cx = cx;
	}*/
	C(int ax,int bx, int cx) :B(ax,bx) {
		this->cx = cx;
	}
	int sum() {
		return cx+ get_bx() + get_ax();
	}
	~C() {
		cout << "destructor of C is called" << endl;
	}
};
int main() {
	C c(10,20,30);
	cout << "sum= " << c.sum() << endl;
	return 0;
}