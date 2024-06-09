#include <iostream>
#include<vector>

using namespace std;

int maxi(vector<int> v,int start ,int end){

if(start>end){
    return 0;
}

int opt1 = v[start]+maxi(v,start+2,end);
int opt2 = maxi(v,start+1,end);
}

int main(){
    vector<int> v = {1,2,3,1};
    int size = v.size();
    if(size==1){
        return 0;
    }
    else{
        int opt1 = maxi(v,0,size-1);
        int opt2 = maxi(v,1,size-1);
        int ans = max(opt1,opt2);

    }


}