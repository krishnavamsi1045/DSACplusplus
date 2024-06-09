#include <iostream>
using namespace std;
#include <limits.h>


int mini(int arr[],int size){
    int small= 10000;
    for(int i=0;i<size;i++){
        if(small>arr[i]){
            small= arr[i];
        }

    }
    return small;
}
int main(){
    int arr[] = {0,2,3,-4,5};
    cout<<INT_MAX;
    cout<<INT_MIN;
    
    int ans = min(INT_MAX,INT_MIN);
    cout<<ans;
    int bns = max(INT_MIN,INT_MAX);
    cout<<bns;
    cout<<mini(arr,5);
}