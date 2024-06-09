#include <iostream>
using namespace std;
#include <stack>

void insertAtBottomRecursion(int target,stack<int> &s){
    if(s.empty()){
        s.push(target);
        return;
    }
  int  temp= s.top();
  s.pop();
  insertAtBottomRecursion(target,s);

  s.push(temp);

}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    stack<int> temp;
   
    insertAtBottomRecursion(200,s);
     while(!s.empty()){
        cout<<s.top();
        s.pop(); 
    }

}