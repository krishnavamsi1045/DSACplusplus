#include <iostream>
using namespace std;



void Extreme1(int a[],int size){
        for(int i=0, j=4;i<=j;i++,j--){
            cout<<a[i]<<a[j];
        }
}
//using while
void Extreme2(int a[],int size){
    int i=0;int j=4;
    while(i<=j){
        if(i==j){
            cout<<a[i];
        }
        else{
        cout<<a[i]<<" "<<a[j]<<" ";
        
        }
        i++;
        j--;
    }
}
int main(){
    int arr[ ] = {1,2,3,4,5};
    int size = 5;
    // Extreme1(arr,size);
    Extreme2(arr,size);
}