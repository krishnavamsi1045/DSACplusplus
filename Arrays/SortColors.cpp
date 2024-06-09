#include <iostream>
using namespace std;

int main(){
    int arr [] = {2,0,1};
    int low = 0;
    int mid =0;
    int high = sizeof(arr)/sizeof(int)-1;
    
    while(mid<=high){
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
           
            high--;
        }
        if(arr[mid]==0){
           swap(arr[mid],arr[low]);
           low++;
        }
        else{
                 mid++;
        }
       
        
    }
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}

