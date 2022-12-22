#include<iostream>
using namespace std;
class Test {
private:
	int x , y;
	static int z;
public:
	Test();
	Test(int a, int b);
	Test(Test& source);
	int display_z();
	void set_data(int a,int b);
	void  display() const;
	int ret_x();
	int ret_y();
};

Test::Test() {
	x=0;
	y=0;
	z++;
	//cout << x <<" "<<y << endl;
}
Test::Test(int a, int b) {
	x = a;
	y = b;
	z++;
	//cout << a << b << endl;
}
Test::Test(Test& source) {
	x=source.x;
	y=source.y;
	cout << x <<" " << y << endl;
	z++;
}
int Test::display_z() {
	return z;
}
void Test::set_data(int a,int b) {
	x = a;
	y = b;
}
void Test::display() const {
	cout << x << " " << y << " " << z << endl;
}
int Test :: ret_x() {
	return x;
}
int Test::ret_y() {
	return y;
}
int Test::z = 0;

int main() {
	Test T;
	Test T1(10, 20);
	Test T2(T1);
	cout << "Number Of Objects Created = " << T.display_z() << endl;
	T1.display();
	Test o1(1, 2), o2(3, 4), o3(5, 6), o4(7, 8), o5(9, 10);
	cout << "Number Of Objects Created = " << T.display_z() << endl;
	int sum = o1.ret_x() + o2.ret_x() + o3.ret_x() + o4.ret_x() + o5.ret_x();
	cout << "SUM = " << sum << endl;
	int i = 1,place=0;
	int max = o1.ret_y();
	if (max < o2.ret_y()) {
		max = o2.ret_y();
		i++;
		place = i;
	}
	if (max < o3.ret_y()) {
		max = o3.ret_y();
		i++;
		place = i;
	}
	if (max < o4.ret_y()) {
		max = o4.ret_y();
		i++;
		place = i;
	}
	if (max < o5.ret_y()) {
		max = o5.ret_y();
		i++;
		place = i;
	}
	cout << "MAX VALUE = " << max << " found at object = " << place << endl;
	return 0;
}
