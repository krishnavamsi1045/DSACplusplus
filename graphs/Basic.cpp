#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>
#include <queue>

class Graph{
    public:
    unordered_map<int,list<int > > adjacentList;
   

    void addEdge(int node ,int val,bool direction){
        if(direction == 1){
            adjacentList[node].push_back(val);
        }
        else{
            adjacentList[node].push_back(val);
            adjacentList[val].push_back(node);
        }
       
    }

    void display(){
        for(auto node : adjacentList){
            cout<<node.first<<": {";
            for(auto val:node.second){
                cout<<val<<",";
            }
            cout<<"}"<<endl;;
        }
    }
   
    void Bfs(int a){
        unordered_map<int,bool> isVisited;
        queue<int> q;
        q.push(a);
        isVisited[a] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout<<curr<<",";
            for(auto i:adjacentList[curr]){
                int next = i;
                if(!isVisited[i]){
                    q.push(next);
                    isVisited[next]=true;
                }
            }
        }
    }

};

int main(){

Graph e;
e.addEdge(1,2,1);
e.addEdge(1,3,1);
e.addEdge(2,4,1);
e.addEdge(4,2,1);
e.addEdge(3,5,1);
e.addEdge(3,6,1);

e.display();

e.Bfs(1);
 

   
}