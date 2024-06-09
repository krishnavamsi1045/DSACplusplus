#include <iostream>
using namespace std;
#include <vector>
#include <vector>

class stack{
    public:
  
    int size;
    vector<pair<int,int > >v;
    int top;

   

    stack(int size){
       v.resize(size);
       
       top =-1;
        this->size = size;
    }

    void push(int data){
       if(v.empty()){
        
        pair<int,int> p;
        p.first = data;
        p.second = data;
       v.at(top++) = p;
    }

        else{
            pair<int,int> p;
            p.first= data;
            pair<int,int> purana = v.back();
            p.second = purana.second;
            v.push_back(p);
        }

        
    }
    void pop(){
        v.pop_back();

    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" ";
            
        }
        cout<<endl;
    }
   
};

int main(){

  stack *a  = new stack(5);
  a->push(88);
  



  a->display();
  



  

  




   
}