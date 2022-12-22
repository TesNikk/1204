#include<iostream>
using namespace std;
class A {
private:
	int ax;
public:
	A() {
		cout << "Default constructor of A" << endl;
	}
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
class B :virtual public A {
private:
	int bx;
public:
	B() {
		cout << "Default constructor of B" << endl;
	}
	B(int bx) {
		this->bx = bx;
	}
	int get_bx() {
		return bx;
	}
	~B() {
		cout << "destructor of b is called" << endl;
	}
};
class C :virtual public A {
private:
	int cx;
public:
	C() {
		cout << "Default constructor of c" << endl;
	}
	C(int cx) {
		this->cx = cx;
	}
	int get_cx() {
		return cx;
	}
	~C() {
		cout << "destructor of C is called" << endl;
	}
};
class D :public B, public C {
private:
public:
	int dx;
	D(int ax,int bx, int cx, int dx) :A(ax),B(bx), C(cx) {
		this->dx = dx;
	}
	int sum() {
		return get_ax() + get_bx() + get_cx() + dx;
	}
	~D() {
		cout << "destructor of D is called" << endl;
	}
};

int main() {
	D d(10,20, 30, 40);
	cout << "SUM= " << d.sum() << endl;
	return 0;
}