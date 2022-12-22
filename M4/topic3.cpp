#include<iostream>
using namespace std;
    class A{
    public:
    void print(){
        cout<<"Inside Print() of class A"<<endl;
    }
};
class B:public A{
public:
    void print(){
    cout<<"Inside Print() of class B"<<endl;
}
};
int main(){
    //Sub-1
    //A a;
    //a.print();
    //sub-2
    //B b;
    //b.print();
    //sub-3
    // A a;
    // A *p;
    // p=&a;
    // p->print();
    //sub-4
    B b;
    A *p;
    p=&b;
    p->print();
    return 0;
}