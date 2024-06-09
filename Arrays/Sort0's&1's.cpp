#include <iostream>
using namespace std;


void sort(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==0) i++;
        if(arr[j]==1) j--;
        if(arr[i]==1 && arr[j]==0) {
            i++;
            j--;
        }
    }
}


int main(){
    int arr [] = {0,1,1,0,1,0};
    int size= sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(int e:arr){
        cout<<e<<" ";
    }
}