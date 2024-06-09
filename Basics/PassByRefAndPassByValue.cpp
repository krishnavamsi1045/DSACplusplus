#include <iostream>
using namespace std;


void increment(int n){
    n=n+56;
    cout<<n;

}

int main(){
    int n= 88;
    cout<<n<<endl;
    increment(n);
    cout<<n<<endl;
    

}