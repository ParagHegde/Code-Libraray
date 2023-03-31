#include<bits/stdc++.h>
using namespace std;
int N = 100;
template<class T>
class Queue{
    public:
    T *arr;
    int front;
    int rear;
    Queue(){
        front =-1;
        rear= -1;
        arr = new T[N];
    }

    void enqueue(T data){
        if(rear == N-1){
            cout<<"queue is full"<<endl;
            return;
        }
        rear++;
        arr[rear]=data;
        if(front == -1){
            front++;
        }
    }


    void dequeue(){
        if(front == -1 || front>rear){
            cout<<"queue is empty"<<endl;
            return ;
        }
        front ++;
    }

    void peek(){
        if(front == -1 || front>rear){
            cout<<"queue is empty"<<endl;
            return ;
        }
        cout<<arr[front]<<endl;
    }
    bool empty(){
        if(front == -1 || front>rear){
            return true;
        }
        return false;
    }
};


int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    while(!q.empty()){
        q.peek();
        q.dequeue();
    }
    return 0;
}