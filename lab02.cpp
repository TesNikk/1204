#include<iostream>
#include<string>
using namespace std;
class Account {
private:
	int ac, age;
	double balance;
	string name;

public:
	int acc_num, age_num;
	double balance_amount;
	string n;
	void create(string n, int a, int acc_no, double bal) {
		name = n;
		ac = acc_no;
		age = a;
		balance = bal;
		cout << "Your Account Created Successfully" << endl;
	}
	void close() {
		if (balance_amount > 0) {
			cout << "Your account closed successfully" << endl;
		}
		else {
			cout << "Your account have " << balance << " so it can't be closed" << endl;
		}
	}
	void deposit(double d) {
		balance += d;
		cout << "Deposit completed successfully" << endl;
	}
	void withdraw(double w) {
		if ((balance - w) >= 0) {
			balance -= w;
			cout << "Withdraw successfull" << endl;
		}
		else {
			cout << "Insufficient Funds" << endl;
		}
	}
	double check_balance() {
		balance_amount = balance;
		return balance_amount;
	}

};
int main() {
	Account acc;
	for (;;) {
		cout << "******** MAIN MENU ********" << endl;
		cout << "Enter Your Option[1-6]:_" << endl;
		cout << "1.Open New Account" << endl;
		cout << "2.Close Old Account" << endl;
		cout << "3.Deposit Money" << endl;
		cout << "4.Withdraw Money" << endl;
		cout << "5.Check Balance" << endl;
		cout << "6.Exit" << endl;
		int opt;
		cin >> opt;
		if (opt == 6) {
			break;
		}
		while (getchar() != '\n');//replace fflush(stdin)
		switch (opt) {
		case 1:
		{
			cout << "Enter Your Name:_" << endl;
			string name;
			getline(cin, name);
			cout << "Enter Age: " << endl;
			int a;
			cin >> a;
			int acc_no;
			cout << "Enter Account Number: " << endl;
			cin >> acc_no;
			cout << "Enter the balance you wanna deposit: " << endl;
			double bal;
			cin >> bal;
			acc.create(name, a, acc_no, bal);
			break;
		}
		case 2:
			acc.close();
			break;
		case 3:
			double d;
			cout << "Deposit: " << endl;
			cin >> d;
			acc.deposit(d);
			break;
		case 4:
			double w;
			cin >> w;
			acc.withdraw(w);
			break;
		case 5:
			cout << "You have " << acc.check_balance() << " balance in your account" << endl;
			break;
		default:
			cout << "You pressed the wrong button" << endl;
			break;
		}
		cout << "-------------------------" << endl;
	}
	return 0;
}