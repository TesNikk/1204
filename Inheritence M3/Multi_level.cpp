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
class B:public A {
};
class C :public B {
public:
    void set(int a){
        set_x(a);
    }
	void set_y(int y) {
		this->y = y;
	}
	int get_y() {
		return y;
	}
	void set_z(int z) {
		this->z = z;
	}
	int get_z() {
		return z;
	}
	void display() {
		cout << "Derived class C is called" << endl;
	}
};
int main() {
	C o1;
	o1.set(10);
	o1.set_y(15);
	o1.set_z(20);
	cout << "x= " << o1.get_x() << " y= " << o1.get_y() << " z= " << o1.get_z() << endl;
	o1.display();
	return 0;
}