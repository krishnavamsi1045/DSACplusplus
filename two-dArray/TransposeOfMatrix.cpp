#include <iostream>
#include <limits.h>

using namespace std;



void transpose(int arr [3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    

// // }
// bool target(int arr[4][3],int row ,int col){

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==10){
//                 return true;
//             }
//         }
//     }
//     return false;
    
// }

// int max(int arr[4][3],int row ,int col){
//     int maxi = INT_MIN;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//            if(arr[i][j]>maxi){
//             maxi=arr[i][j];
//            }
//         }
//     }
//      return maxi;
    
// }

int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,8},{8,9,10}};
   int row = 4;
   int col = 3;
   
   transpose(arr,row,col);
   cout<<endl; 

//    cout<<sizeof(arr[0])/sizeof(arr[0][0]);
//    cout<<sizeof(arr)/sizeof(arr[0]);

// cout<<endl;

// cout<<target(arr,row,col);
// cout<<endl;
//  int ans = max( arr,row,col);
    
//     cout<<ans<<" ";


}