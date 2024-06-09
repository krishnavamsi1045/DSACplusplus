#include <iostream>

using namespace std;

void Print(int arr [],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

int main(){
    int arr [] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    Print(arr,size);

}