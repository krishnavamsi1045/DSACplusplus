#include <iostream>
using namespace std;
#include <stack>


bool isRedudant(stack<char> &ch,string s){
    for(int i=0;i<s.length();i++){
        char c= s[i];
        if(c =='(' || c=='+' || c=='-' || c=='*' || c=='/' || c=='%' ){
            ch.push(c);
        }
        else if(c ==')'){
            int count = 0;
            while( !ch.empty() && ch.top()!='('){
                if(ch.top()=='+' || ch.top()=='-' || ch.top() =='*' ||ch.top()=='/' || ch.top() =='%'){
                        count++;
                }
                ch.pop();
            }
            ch.pop();
            if(count<=0) return true;


        }

    }
    return false;
}

int main(){
    string s = "((ab) * (a*b))";
    stack<char> st;
    cout<<isRedudant(st,s);
    
}