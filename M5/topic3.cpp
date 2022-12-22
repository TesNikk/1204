#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 6> ax = {10, 60, 30, 70, 20};
    // for (auto i : ax)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    cout << "Position at 3 " << ax.at(2) << endl;
    cout << "Front element is " << ax.front() << endl;
    cout << "Last element of the array is " << ax.back() << endl;
    cout << "Filling array with a particular number " << endl;
    ax.fill(10);
    if(ax.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }
    cout << "Size of the array " << ax.size() << endl;
    cout << "Size of the array " << ax.max_size() << endl;
    cout << "Address of the 1st element is " << ax.begin() << endl;
    cout << "Adddress of the last element is " << ax.end() << endl;
    return 0;
}