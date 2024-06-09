#include <iostream>

using namespace std;

void sumRow(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
                sum+=arr[i][j];
        }
        cout<<sum<<" "<<endl;
    }
    
}

void sumCol(int arr[][4],int row,int col){
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
           sum=sum+arr[j][i];
        }
        cout<<sum<<" "<<endl;
    }
    
}
void diagonal(int arr[][3],int row,int col){
    int sum =0;
    for(int  i=0;i<row;i++){
        int j=i;
        sum=sum+arr[i][j];
    }
    cout<<sum<<endl;

}

int main(){
    int arr[2][4] = {{1,2,3,4},{5,6,7,8}};
int row =sizeof(arr)/sizeof(arr[0]);
  
   int col =sizeof(arr[0])/sizeof(arr[0][0]);
   sumCol(arr,row,col);
   cout<<endl;
   cout<<endl;
   int arr2 [][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int r = sizeof(arr2)/sizeof(arr2[0]);
   int c = sizeof(arr2[0])/sizeof(arr2[0][0]);

   diagonal(arr2,r,c);
    
}