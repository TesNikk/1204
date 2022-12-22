#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> qu;
    for (int i = 1; i <= 5; i++){
        qu.push(i);
    }
    qu.pop();
    cout<<"Popped a element"<<endl;
    cout<<"Front element = "<<qu.front()<<endl;
    cout<<"Rear element = "<<qu.back()<<endl;
    if (qu.empty())
    {
        cout << "queue is empty" << endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}