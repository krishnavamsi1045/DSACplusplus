#include <iostream>

using namespace std;

void  counting(int arr[],int size){
    int one=0;
    int zero=0;
    for(int i=0;i<9;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<zero<<endl;
    cout<<one<<endl;
}


int main(){
    int arr[]  = {0,1,1,1,0,0,0,1,0};
    counting(arr,9);
}