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
class B :virtual public A {

};
class C :virtual public A {

};
class D :public B, public C {
public:
	void setX(int x) {
		set_x(x);
	}
	void setY(int y) {
		this->y = y;
	}
	void setZ(int z) {
		this->z = z;
	}
	int getX() {
		return get_x();
	}
	int getY() {
		return y;
	}
	int getZ() {
		return z;
	}
};
int main() {
	D d;
	d.setX(10);
	d.setY(20);
	d.setZ(30);
	cout << "X= " << d.getX() << " Y= " << d.getY() << " Z= " << d.getZ() << endl;
	return 0;
}