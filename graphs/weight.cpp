#include <iostream>
using namespace std;
#include <list>
#include <unordered_map>

class Graph{
    public:
    unordered_map<int,list<pair<int,int > > > adj;

    void add(int src,int destination,int weight,bool isDirected){
        if(isDirected){
            adj[src].push_back(make_pair(destination,weight));
        }
        else{
            adj[src].push_back(make_pair(destination,weight));
            adj[destination].push_back(make_pair(src,weight));
        }

    }
    void Display(){
        for(auto i:adj){
            cout<<i.first<<":{";
            for(auto j:i.second){
                cout<<"{"<<j.first<<","<<j.second<<"}";
            }
            cout<<"}";
            cout<<endl;
        }
    }
};

int main(){
    Graph g;
   g.add('a','b',5,0);

    g.Display();
}