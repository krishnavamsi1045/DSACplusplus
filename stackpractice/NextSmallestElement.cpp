#include <iostream>
using namespace std;
#include <stack>
#include <vector>


vector<int> nextSmallest(vector<int> &arr){
    stack<int> a;
    a.push(-1);
    for(int i=4;i>=0;i--){
        
       while(a.top()>=arr[i]){
        a.pop();

       }
       arr[i] = a.top();
       a.push(arr[i]);
    }
    return arr;
}


int main(){
    stack<int> st;
    vector<int> arr;
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);
   
    nextSmallest(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

   
}