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
		cout << "destructor of A is called" << endl;
	}
};
class B {
private:
	int bx;
public:
	B(int bx){
		this->bx = bx;
	}
	int get_bx() {
		return bx;
	}
	~B() {
		cout << "destructor of B is called" << endl;
	}
};
class C :public A,public B {
private:
	int cx;
public:
	C(int ax,int bx, int cx) :A(ax),B(bx) {
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