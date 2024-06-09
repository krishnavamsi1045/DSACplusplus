#include <iostream>
using namespace std;
#include <queue>
#include <list>
#include <unordered_map>

class Graph{

    public:
    unordered_map<int,list<int > > adj;

    void add(int src,int destination,bool isDirected){
        if(isDirected){
            adj[src].push_back(destination);
        }
        else{
            adj[src].push_back(destination);
            adj[destination].push_back(src);
        }
    }

    void display(){
        for(auto i:adj){
            cout<<i.first<<":{";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<"}";
            cout<<endl;
        }
    }

    bool isCycle(int a){
        queue<int> q;
        unordered_map<int,bool> isVisited;
        unordered_map<int,int> parent;

        q.push(a);
        parent[a] = -1;
        isVisited[a] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto i:adj[front]){
                if(isVisited[i] && i !=parent[i]){
                    cout<<"it's a cyclic ";
                    return false;
                }
                else{
                    q.push(front);
                }
            }

        }

    }

};

int main(){
    Graph g;
    g.add(0,1,1);
   g.add(1,2,1);
    g.add(1,3,1);
    g.add(2,5,1);
    g.add(2,4,1);
    g.add(3,4,1);
    g.add(4,2,1);

    

    g.display();

    cout<<endl;
    cout<<g.isCycle(0);
}