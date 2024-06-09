#include <iostream>
using namespace std;

int main(){
    int arr[5]  = {1,2,3,5,5};
    bool flag = 0;
    for(int i=0;i<5;i++){
        if(arr[i]==33){
            flag = 1;
            break;
        }
    }
        if(flag){
            cout<<"found";
        }
        
        else cout<<"not found";
    }
