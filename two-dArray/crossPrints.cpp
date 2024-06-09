#include <iostream>

using namespace std;


//from 0,0 t0 2,2

void cross1(int arr[3][3] ,int row,int col){
    for(int i=0;i<row;i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}
void cross2(int arr[3][3],int row ,int col){
    for(int i=2;i>=0;i--){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}
void cross3(int arr[3][3],int row,int col){
  
   int j=0;
   for( int i=row-1;i>=0;i--){
    cout<<arr[i][j++]<<" ";
   }
   cout<<endl;
}

void cross4(int arr[3][3],int row,int col){
     int j=col-1;
   for( int i=row-1;i>=0;i--){
    cout<<arr[i][j--]<<" ";
   }
   cout<<endl;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row= 3;
    int col = 3;
    // cross1(arr,row,col);
    // cross2(arr,row,col);
    // cout<<endl;
    cross3(arr,row,col);
    cross4(arr,row,col);
}