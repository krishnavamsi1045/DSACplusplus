#include <iostream>
using namespace std;


void printing(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<"("<<arr[i]<<arr[j]<<arr[k]<<"),";
            }
        }
    }
}
int main(){
    int arr []  ={1,2,3};
    int size = sizeof(arr)/sizeof(int);
    printing(arr,size);
}