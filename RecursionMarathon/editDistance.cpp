#include <iostream>

using namespace std;


int editDistance(string a,string b,int i,int j){
    if(i>=a.length()){
        return b.length()-j;
    }
    if(j>=b.length()){
        return a.length()-i;
    }

    int ans =0;

    if(a[i]==b[j]){
        ans = editDistance(a,b,i+1,j+1);
    }
    else{
    //replace
    int opt1 = editDistance(a,b,i+1,j+1)+1;
    //delete
    int opt2 = editDistance(a,b,i+1,j)+1;
    //insert
    int opt3 = editDistance(a,b,i,j+1)+1;

    ans= min(opt1,min(opt2,opt3));
    }
    return ans;
}

int main(){
    string a= "horse";
    string b = "vamsi";
    int i=0;int j=0;

    cout<<editDistance(a,b,i,j)<<endl;
}