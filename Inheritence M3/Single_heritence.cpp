#include<iostream>
using namespace std;
class A {
private:
	int x;
protected:
	int y;
public:
	int z;
	void set_x(int x){
        this->x=x;
    }
    int get_x() {
		return x;
	}
};
class B :public A {
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
    void set_z(int z){
        this->z=z;
    }
    int get_z(){
        return z;
    }
	void display() {
		cout << "Derived class is called" << endl;
	}
};
int main() {
	B s1;
	s1.set(10);
	s1.set_y(5);
    s1.set_z(2);
	s1.display();
	cout << "x= " << s1.get_x() << " y= " << s1.get_y() <<" z="<<s1.get_z()<< endl;
	return 0;
}