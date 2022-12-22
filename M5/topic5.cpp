#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int, string, double> tx;
    tx = make_tuple(100, "Kamal", 3.5);
    cout << "Before Swap" << endl;
    cout << "First Data : " << get<int>(tx) << endl;
    cout << "Second Data : " << get<string>(tx) << endl;
    cout << "Third Data : " << get<double>(tx) << endl;
    get<double>(tx) = 3.7;
    tuple<int, string, double> bx = make_tuple(50, "Nahid", 5.3);
    tx.swap(bx);
    cout << "After Swap" << endl;
    cout << "First Data : " << get<int>(tx) << endl;
    cout << "Second Data : " << get<string>(tx) << endl;
    cout << "Third Data : " << get<double>(tx) << endl;
    return 0;
}