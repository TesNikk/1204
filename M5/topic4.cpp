#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> px = make_pair(10, "Rajshahi");
    cout << "Before Swap" << endl;
    cout << "First Data : " << px.first << endl;
    cout << "Second Data : " << px.second << endl;
    get<int>(px) = 20;
    pair<int, string> px1 = make_pair(40, "Dhaka");
    px.swap(px1);
    cout << "After Swap" << endl;
    cout << "First Data : " << px.first << endl;
    cout << "Second Data : " << px.second << endl;
    return 0;
}