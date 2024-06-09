#include <iostream>
using namespace std;
#include <vector>

int maxSubsetSum(vector<int> &v,int start,int end){
    if(start>=end){
        return v[start];
    }

    int mid = (start+end)/2;

    int leftside = maxSubsetSum(v,start,mid);
    int rightside = maxSubsetSum(v,mid+1,end);


    int leftSum =INT_MIN;
    int rightSum = INT_MIN;
    int l=0;int r =0;

    for(int i=mid;i>=0;i--){
        l+=v[i];
        if(leftSum<l) leftSum = l;

    }
     for(int i=mid+1;i<v.size();i++){
        r+=v[i];
        if(rightSum<r) rightSum = r;

    }

    int center = leftSum+rightSum;

    return max(center,max(leftSum,rightSum));



}




int main(){

    vector<int> v;
    v.push_back(-2);
    v.push_back(1);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(-5);
    v.push_back(4);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<maxSubsetSum(v,0,v.size()-1);


}