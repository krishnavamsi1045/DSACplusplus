#include <iostream>

using namespace std;

class stack{
    public:
    int size;
    int * arr;
    int top1;
    int top2;


    stack(int size){
        this->size = size;
        arr= new int[size];
        top1= -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1==1 ){
            cout<<"overflow";
        }
        top1++;
        arr[top1] = data;

    }
     void push2(int data){
        if(top2-top1==1 ){
            cout<<"overflow";
        }
        top2--;
        arr[top2] = data;

    }
    void pop1(){
        if(top1==-1) {
            cout<<"underflow";
        }
        else{
            top1--;
        }
    }
    void pop2(){
        if(top2==size) {
            cout<<"underflow";
        }
        else{
            top2++;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};




int main(){
   stack *one = new stack(6);
   one->push1(10);
   one->display();
   one->push2(20);
   one->display();
   one->push2(20);
   one->push2(20);
   one->push2(20);
   one->push2(20);
   one->display();
   


}