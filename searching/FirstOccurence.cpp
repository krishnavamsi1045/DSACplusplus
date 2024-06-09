#include <iostream>

using namespace std;

int binary(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int ans =-1;
    while(start<=end){
        int mid= (start+(end-start))/2;
        if(arr[mid]==target){
            ans= mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,30,30,30,40,50,};
    int size = sizeof(arr)/sizeof(int);
    
    int ans = binary(arr,size,30);
    cout<<ans ;
}