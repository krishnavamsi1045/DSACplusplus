#include <iostream>
using namespace std;


//if you don't understand this then go throught permutations and combinations mathmathematics

int ans(int n){
    if(n==1) return 0;
    if (n==2) return 1;

    int sol =  (n-1) * (ans(n-1) + ans(n-2));
    return sol;
}


int main(){
    int n=4;
    cout<<ans(n)<<endl;

}