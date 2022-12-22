#include<iostream>
using namespace std;
class Father{
private:
	int money;
protected:
	int gold;
public:
	int land;
	void set_money(int a) {
		money = a;
	}
	int get_money() {
		return money;
	}
};
class Son :public Father {
	void set_gold(int a) {
		gold = a;
	}
	void set_land(int a) {
		land = a;
	}
	int get_gold() {
		return gold;
	}
	int get_land() {
		return land;
	}
	void display() {
		cout << get_money() << endl;
	}
};
class Grandson :public Son {
	void display_all() {
		cout << " " << endl;
	}
};
int main() {
	Father f1;
	Son s1;
	Grandson g1;
	f1.set_money(787845454234);
	cout << "Total Money = " << f1.get_money() << endl;

	return 0;
}