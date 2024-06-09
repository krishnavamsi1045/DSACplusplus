#include <iostream>
using namespace std;

class stack{
    public:
    int top;
    char *arr;
    int size;

    stack(int size){
        arr= new char[size];
        this->size = size;
        this->top= -1;
    }
   void push(char data){
     top++;
    if(top>=size){
        cout<<"imposible";
        cout<<endl;
        top--;
    }
   
    arr[top]=data;

   }

  

   void pop(){
    top--;
   }
   void display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
   }
   bool empty(){
    if(top==-1) return false;
    else return true;
   }

  
    };



int main(){
        stack *s = new stack(5);
       s->push(1);
       s->push(2);
       s->push(3);
       s->push(4);
       s->push(5);
       s->display();
       s->pop();
       s->display();
       s->push(5);
       s->display();
       s->push(6);
      

       stack *name = new stack(5);
       string nam = "vamsi";
       for(int i=0;i<nam.length();i++){
        name->push((char)nam[i]);
       }

      name->display();
      
             
       
}