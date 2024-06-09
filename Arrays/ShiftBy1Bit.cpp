#include <iostream>
using namespace std;



void shift(int arr[],int size){
    int last =arr[size-1];
    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    
    arr[0]=last;
   
  
}

int main(){
   int arr[] = {10,20,30,40,50};
   int size = sizeof(arr)/sizeof(int);
   shift(arr,size);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}