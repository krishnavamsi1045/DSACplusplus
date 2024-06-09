#include <iostream>
using namespace std;
#include <map>
#include <list>



int main(){

  map<int,list<int > > hai;
  hai[0].push_back(1);
  hai[0].push_back(2);
  hai[0].push_back(3);
  hai[1].push_back(2);
  hai[1].push_back(3);

  for(auto i:hai){
    cout<<i.first<<",";
    for(auto j:i.second){
        cout<<j<<",";
    }
    cout<<"end of"<<i.first<<endl;
   
    
  }
}