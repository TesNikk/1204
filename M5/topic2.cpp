#include <iostream>
using namespace std;
template <typename T, typename R>
class A
{
    private:
    T x;
    R y;

public:
    void setData(T x, R y)
    {
        this->x = x;
        this->y = y;
    }
    template <typename P>
    P getSum()
    {
        return x + y;
    }
};
int main()
{
    A<int, int> a;
    a.setData(2, 3);
    cout << "The sum is " << a.getSum<int>() << endl;
    A<int, double> b;
    b.setData(2, 4.4);
    cout << "The sum is " << b.getSum<double>() << endl;
    A<double, int> c;
    c.setData(2.3, 2);
    cout << "The sum is " << c.getSum<double>() << endl;
    A<double, double> d;
    d.setData(2.3, 5.4);
    cout << "The sum is " << d.getSum<double>() << endl;
    return 0;
}