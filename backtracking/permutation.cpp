#include <iostream>
using namespace std;


void permutation(string &a,int idx){
    //base 
    if(idx>=3){
         cout<<a<<endl;
        return ;
    }

    for(int i=idx;i<3;i++){
        swap(a[i],a[idx]);
       
        permutation(a,idx+1);

        swap(a[i],a[idx]);
    }
}



int main(){
    string word = "abc";
    permutation(word,0);
}