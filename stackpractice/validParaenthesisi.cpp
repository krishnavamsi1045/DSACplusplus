#include <iostream>
using namespace std;
#include <stack>

int main(){
    stack<char> s;
    string word = "()[]{}";
    for(int i=0;i<word.length();i++){
        if(word[i]== '(' || '{' || '['){
            s.push(word[i]);
        }
    }
    cout<<s.top();
}