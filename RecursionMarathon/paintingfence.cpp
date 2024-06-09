#include <iostream>

using namespace std;



int painting(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k + k*(k-1);
    }
    
        return (k-1)* (painting(n-1,k)) + (k-1) * (painting(n-2,k));
    
}

int main(){
    int n  =3;
    int k=3;
    cout<<painting(n,k)<<endl;

}