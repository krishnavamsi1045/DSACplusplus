#include <iostream>

using namespace std;

#include <vector>

void merging(vector<int> &ans,int start,int end){
    int mid = (start+end)/2;
    int newleft = mid-start+1;
    int newright = end-mid;

   vector<int> a (newleft);
   vector<int> b (newright);

   int pointer =0;
   for(int i=0;i<newleft;i++){
    a[pointer++] = ans[i];
   }

//    pointer =0;
//    for(int k=mid+1;k<ans.end();k++){
//         b[pointer++] = ans[k];
//    }

   int x=0;int y=0;int z=0;
   while(x<newleft && y<newright){
    if(a[x]>b[y]){
        ans[z++]= b[y];
        y++;
    }
    else{
        ans[z++] =a[x];
        x++;
    }



   }

   while(x<newleft){
    ans[z++] = a[x];
    x++;
   }

   while(y<newright){
    ans[z++] = b[y];
    y++;
   }
  
  
}



void merge(vector<int> &ans,int start,int end){

    if(start>end){
        return;
    }
    int mid = (start+end)/2;
    merge(ans,start,mid);
    merge(ans,mid+1,end);
    merging(ans,start,end);
    
}


int main(){

    vector<int> ans ;
    ans.push_back(3);
    ans.push_back(2);
    ans.push_back(1);
    ans.push_back(4);
    ans.push_back(5);

}