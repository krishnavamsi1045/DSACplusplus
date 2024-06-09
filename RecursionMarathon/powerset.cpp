#include <iostream>

using namespace std;

void powerset(int arr[],int size,string ans,int idx ){
    if(idx >=size){
        cout<<ans<<" ";
    }
    powerset(arr,size,ans,idx+1);

    ans = to_string(arr[idx])+"";
    powerset(arr,size,ans,idx+1);
}


int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    powerset(arr,size,"",0);

}