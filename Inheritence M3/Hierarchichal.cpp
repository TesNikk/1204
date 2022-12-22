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
class B :public A {
public:
	void set(int a) {
		set_x(a);
	}
	void set_y(int y) {
		this->y = y;
	}
	void set_z(int z) {
		this->z = z;
	}
	int get_y() {
		return y;
	}
	int get_z() {
		return z;
	}
	void display() {
		cout << "Derived class B is called" << endl;
	}
};
class C :public A {
public:
	void set(int a) {
		set_x(a);
	}
	void set_y(int y) {
		this->y = y;
	}
	void set_z(int z) {
		this->z = z;
	}
	int get_y() {
		return y;
	}
	int get_z() {
		return z;
	}
	void display() {
		cout << "Derived class C is called" << endl;
	}
};
int main() {
	B b;
	C c;
	b.set(10);
	b.set_y(15);
	b.set_z(20);
	b.display();
	cout << "x= " << b.get_x() << " y= " << b.get_y() << " z= " << b.get_z() << endl;
	c.set(10);
	c.set_y(15);
	c.set_z(20);
	c.display();
	cout << "x= " << c.get_x() << " y= " << c.get_y() << " z= " << c.get_z() << endl;
	return 0;
}