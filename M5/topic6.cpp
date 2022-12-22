#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++){
        st.push(i);
    }
    st.pop();
    cout<<"Top element = "<<st.top()<<endl;
    if (st.empty())
    {
        cout << "Stack is Empty" << endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}