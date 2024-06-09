#include<iostream>
using namespace std;
#include <limits.h>




int unique(int arr[],int size){
    
    int ans=-1;
    for(int i=0;i<size;i++){
         int temp=0;
        for(int j=0;j<size;j++){
           
            if(arr[i]==arr[j]){
                temp++;
               

            }
            
        }
        if(temp ==1){
               ans=arr[i];

               break;
            }

    }
    return ans;
}

int main(){
    int arr [] = {11,11,2,2,22,33,33,22};
    int size=8;
    cout<<unique(arr,size);

}