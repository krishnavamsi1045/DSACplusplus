#include <iostream>
using namespace std;
#include <stack>

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
        cout<<endl;
    }
    cout<<endl;
}

void insert(int target,stack<int> &s){
if(s.top()<target || s.empty()){
    s.push(target);
    return;
}
int temp = s.top();
s.pop();
insert(target,s);
s.push(temp);


}
void sortedStack(stack<int> &s){

    if(s.size()==0) return;

    int temp = s.top() ;
    s.pop();
    sortedStack(s);

    insert(temp,s);


}


int main(){
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(130);
    s.push(4);
    s.push(540);

    display(s);

    sortedStack(s);
    display(s);



   

}