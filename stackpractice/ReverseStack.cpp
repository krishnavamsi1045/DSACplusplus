#include <iostream>
using namespace std;
#include <stack>

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
        cout<<endl;
    }
}
void insertAtbo(stack<int> &s,int target){
    if(s.size()==0) {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtbo(s,target);
    s.push(temp);



}
void reverseStack(stack<int> &s){
    if(s.size()==0) return;

    int temp = s.top();
    s.pop();
    reverseStack(s);

    insertAtbo(s,temp);

   
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    display(s);
    cout<<endl;

   reverseStack(s);
   display(s);
    cout<<endl;







}