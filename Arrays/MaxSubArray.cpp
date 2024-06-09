#include <iostream>
using namespace std;

int maxsum(int *arr,int size){
    int cur =0;
    int max = 0;
    for(int i=0;i<size;i++){
        cur+=arr[i];
        if(max<cur){
            max = cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    return max;

   
}
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,size);
}