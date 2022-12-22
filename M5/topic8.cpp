#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void display(list<int> li){
    list<int>::iterator itr;
    for(itr=li.begin();itr!=li.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void displayRev(list<int> li){
    list<int>::reverse_iterator itr;
    for(itr=li.rbegin();itr!=li.rend();itr++){
        cout<<*itr<<endl;
    }
    cout<<endl;
}
int main(){
    list<int> li;
    for(int i=1;i<=8;i++){
        li.push_back(i);
    }
    li.push_front(9);
    li.push_front(10);
    display(li);
    cout<<"Front element = "<<li.front()<<endl;
    cout<<"Back element = "<<li.back()<<endl;
    cout<<"Deleting Back element "<<endl;
    li.pop_back();
    cout<<"Deleting front element "<<endl;
    li.pop_front();
    int x;
    cout<<"Enter Element to search: "<<endl;
    cin>>x;
    list<int>::iterator itr;
    itr=find(li.begin(),li.end(),x);
    if(*itr==x){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    int y;
    cout<<"Enter the element which is before the inserted element: "<<endl;
    cin>>y;
    list<int>::iterator p;
    p=find(li.begin(),li.end(),y);
    cout<<"Enter the element which you wanna insert: "<<endl;
    x=0;
    cin>>x;
    li.insert(p,x);
    display(li);
    y=0;
    cout<<"Enter the element which is after the inserted element: "<<endl;
    cin>>y;
    list<int>::iterator p1;
    p1=find(li.begin(),li.end(),y);
    advance(p1,1);
    cout<<"Enter the element which you wanna insert: "<<endl;
    x=0;
    cin>>x;
    li.insert(p1,x);
    display(li);


    

    return 0;
}