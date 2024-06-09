#include <iostream>
using namespace std;

#include <vector>


int helper(vector<int> &n,int number,int a,int ans){

    if(number >a ){
        for(int i=0;i<n.size();i++){
            cout<<n[i]<<" ";
        }
        ans++;
        
    }

    for(int i=0;i<n.size();i++){
        if(n[i] == 0 && ((number%i ==0) ||(i%number ==0))){
            n[i] = number;
            helper(n,number+1,a,ans);
            n[i]=0;
        }
    }
    return ans;
}

int main(){

    int n= 3;
    vector<int> v;
    cout<<helper(v,1,3,0);

}