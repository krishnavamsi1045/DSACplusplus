#include <iostream>
using namespace std;
#include <vector>




int main(){
    int arr[]= {1,2,3,4,5,6,7};
   int k=3;
   vector<int> v;
   for(int i=0;i<7;i++){
    int ans = (i+k)%7;
    v.push_back(arr[ans]);
   }
   for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
   }

    
}