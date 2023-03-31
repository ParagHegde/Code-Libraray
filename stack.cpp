#include<bits/stdc++.h>
using namespace std;
int N=100;

template<class T>
class Stack{
    public:
    T *arr;
    int top;
    Stack(){
        arr =new T[N];
        top = -1;
    }


    void push(T data){
        if(top == N-1){
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }
    void peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    bool full(){
        if(top==N-1){
            return true;
        }
        return false;
    }

};

int main(){
    Stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(40);
    while(!s.empty()){
        s.peek();
        s.pop();
    }

    return 0;
}