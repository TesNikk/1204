#include<iostream>
using namespace std;
class A {
private:
	int x;
protected:
	int y;
public:
	int z;
	void set_x(int x) {
		this->x = x;
	}
	int get_x() {
		return x;
	}
};
class B{
private:
	int p;
protected:
	int q;
public:
	int r;
	void set_p(int p) {
		this->p = p;
	}
	int get_p() {
		return p;
	}
};
class C :public A,public B {
public:
	void set1(int a) {
		set_x(a);
	}
	void set_y(int y) {
		this->y = y;
	}
	void set_z(int z) {
		this->z = z;
	}
	void set2(int c) {
		set_p(c);
	}
	void set_q(int q) {
		this->q = q;
	}
	void set_r(int r) {
		this->r = r;
	}
	int get_y() {
		return y;
	}
	int get_z() {
		return z;
	}
	int get_q() {
		return q;
	}
	int get_r() {
		return r;
	}
	
	void display() {
		cout << "Derived class C is called" << endl;
	}
};
int main() {
	C o1;
	o1.set1(10);
	o1.set_y(15);
	o1.set_z(20);
	o1.set2(30);
	o1.set_q(40);
	o1.set_r(50);

	cout << "x= " << o1.get_x() << " y= " << o1.get_y() << " z= " << o1.get_z() << endl;
	cout << "p= " << o1.get_p() << " q= " << o1.get_q() << " r= " << o1.get_r() << endl;

	o1.display();
	return 0;
}