#include <iostream>

using namespace std;

#include <vector>


void subset(vector<int> &v ,int size,vector<vector<int > >&ans,vector<int> subsets){
    if(size==v.size()){
       ans.push_back(subsets);
        return ;
    }

    subsets.push_back(v[size]);
    subset(v,size+1,ans,subsets);
    subsets.pop_back();

 while(  ( (size+1) < v.size() )&& v[size]==v[size+1]) size++;
    subset(v,size+1,ans,subsets);
}


int main(){
    vector<int> v;
    vector<int> v1;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    vector<vector<int > >ans;

    subset(v,0,ans,v1);

   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   

}