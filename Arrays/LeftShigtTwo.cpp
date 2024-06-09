#include <iostream>

using namespace std;
  

void shift2(int arr[],int size){
    int a = arr[0];
    int b = arr[1];
    for(int i=0;i<size-2;i++){
        arr[i]=arr[i+2];
    }
    arr[3] =a;
    arr[4] =b;
}

int main(){
    int arr [] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    shift2(arr,size);
    for(int e:arr){
        cout<<e<<" ";
    }
}