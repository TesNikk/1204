#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Circuit {
private:
	int real;
	int img;
public:
	Circuit(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	/*Circuit add(Circuit x) {
		Circuit temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}*/
	Circuit operator+(const Circuit x) {
		Circuit temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}
	int display_real() {
		return real;
	}
	int display_img() {
		return img;
	}
};
int main() {
	Circuit c1(10, 15);
	Circuit c2(5, 15);
	Circuit c3;
	//c3 = c1.add(c2);
	c3 = c1 + c2;
	cout << c3.display_real() << "+" << "i" << c3.display_img() << endl;
	return 0;
}