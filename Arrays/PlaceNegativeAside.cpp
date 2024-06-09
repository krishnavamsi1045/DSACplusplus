#include <iostream>

using namespace std;

int main(){
    int arr[] = {23,-7,12,-10,-11,40,60};
        int i=0;int j=0;
        int size = sizeof(arr)/sizeof(int);
        while(i<size){
            if(arr[i]>0){
                i++;
            }

            
            if(arr[i]<0){
                swap(arr[i],arr[j]);
                    i++;
                    j++;
                }
            }
        
             for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
       
        }
       
    
