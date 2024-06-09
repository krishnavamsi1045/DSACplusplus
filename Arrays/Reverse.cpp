#include <iostream>
using namespace std;


void Swap(int arr[],int i,int j){
    while(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] =temp;
            i++;
            j--;
    }
}

void reverse(int arr[],int size){
    int i=0;
    int j=4;

        Swap(arr, i, j);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}


int main(){
    int arr[] = {1,2,3,4,4};
    int size= 5;
    reverse(arr,5);
}