#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<int> s;
    s.push(88);
    s.push(56);
    s.push(22);
    s.push(17);
    cout<<s.top();
    cout<<s.size();
    cout<<s.empty();

    stack<char> name;
    string nam = "vamsi";
    for(int i=0;i<nam.length();i++){
        name.push(nam[i]);;
    }

    while(!name.empty()){
        cout<<name.top();
        name.pop();
       
    }
    
   
   
}