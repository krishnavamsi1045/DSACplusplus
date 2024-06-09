#include <iostream>
using namespace std;

class stack{
    public:
    int data;
    int front;
    int rear ;
    int *arr;
    int size;

    stack(int size){
        
        arr= new int[size];
        this->size = size;
        this->front =-1;
        this->rear = -1;
    }

  
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void push(int data){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=data;
        }
        else if(front ==0 && rear == size-1){
            cout<<"overflow"<<endl;
            return;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }
    void pop(){
        if(front == -1 && rear == -1){
            cout<<"queue is empty";
        }
        else if(front !=-1 && rear!= -1 && front == rear){
            arr[front] =-1;
            front--;
            rear--;
        }
        else{
            arr[front] = -1;
            front++;


        }
    }
    void getFront(){
        cout<<arr[front];
        cout<<endl;
    }
    void getRear(){
        cout<<arr[rear];
        cout<<endl;
    }
    
};

int main(){

    stack *a = new stack(5);
    a->push(1);
    a->push(2);
    a->push(3);
    a->push(4);
    a->push(5);
    a->display();
    a->pop();
    a->display();
     a->pop();
    a->display();
    a->getFront();
    a->getRear();
   
   
  

 
   
}