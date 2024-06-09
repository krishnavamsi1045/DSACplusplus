#include <iostream>
using namespace std;

class CQueue{
    int size;
    int *arr;
    int front;
    int rear ;

    CQueue(int size){
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[size];
        
    }
    void push(int data){
        if(front== rear ==-1){
            front++;
            rear++;
            arr[front] = data;
        }
        else if(front ==0 && rear == size-1){
            cout<<"it is full";
            return;
        }
        else if(front !=0 && rear == size-1){
            rear = 0;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
       
    }
    void pop(){
        if(rear == -1 && front == -1){
            cout<<" imposiitbe";

        }
       else if(front == rear){
           arr[front] = -1;
           front++;
        }
        else if(front == 0 && rear == size-1){
            arr[front]= -1;
            front++;
        }
        else{

        }
    }


};

int main(){

}