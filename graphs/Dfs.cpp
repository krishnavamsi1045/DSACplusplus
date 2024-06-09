#include <iostream>
using namespace std;
#include <list>
#include <unordered_map>
#include <queue>

template<typename T>
class Graph{
    public:
    unordered_map<T,list<pair<T,int > > > adj;

    void add(T src,T destination,int weight,bool isDirected){
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
   void Dfs(T a,unordered_map<T,bool>&isVisited){
   isVisited[a] = true;
    cout<<a<<"";
    for(auto i:adj[a]){
        int curr = i.first;
        if(!isVisited[curr]){
            Dfs(curr,isVisited);

        }
    }
   }
   
};

int main(){
    Graph<char> g;
    g.add('a','b',5,0);

    g.add('c','a',9,0);
   
    g.add('e','f',10,0);
    
    g.add('h','j',7,0);
   

    g.Display();

    unordered_map<char,bool> isVisited;
    for(char node = 'a';node<='f';node++){
        if(!isVisited[node]){
            g.Dfs(node,isVisited);
        }
    }
   


   
    
}