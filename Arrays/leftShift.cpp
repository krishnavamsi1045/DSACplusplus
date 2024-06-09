#include <iostream>
using namespace std;

void leftShift(int arr[],int size){
    int start = arr[0];
    for(int i=0;i<size-1;i++){
        arr[i] =arr[i+1];
    }
    arr[size-1] =start;

}

int main(){
    int arr [] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    // for(int e:arr){
    //     cout<<e<<" ";
    // }
    leftShift(arr,size);

    for(int e:arr){
        cout<<e<<" ";
    }
    


 }