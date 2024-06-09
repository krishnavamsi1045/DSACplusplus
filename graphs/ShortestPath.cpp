#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <queue>
#include <limits.h>
#include <set>

class Graph{
    public:
    unordered_map<int,list<pair<int,int > > > adjlist;

    void addEdge(int src,int dest,int w,bool isDirected){
        if(isDirected){
            adjlist[src].push_back(make_pair(dest,w));
        }
        else{
            adjlist[src].push_back(make_pair(dest,w));
            adjlist[dest].push_back(make_pair(src,w));
        }
    }
    void display(){
        for(auto ele:adjlist){
            cout<<ele.first<<":{ ";
            for(auto neigh:ele.second){
                cout<<"("<<neigh.first<<","<<neigh.second<<")";

            }
            cout<<"}";
            cout<<endl;
        }
    }

    void topo(int src,unordered_map<int,bool> &isVisited,stack<int> &st){
        isVisited[src] = true;
        for(auto neighbours :adjlist[src]){
            int neighbourNode = neighbours.first;
            int neighbourDistance = neighbours.second;

            if(!isVisited[neighbourNode]){
                topo(neighbourNode,isVisited,st);
            }
        }
        st.push(src);
    }

    //djstrk's algorithm
    void djstrk(int n,int src,int dest){
        vector<int> distance(n+1,INT_MAX);
        set<pair<int,int> > setInsert;

        pair<int,int> firstPair = make_pair(0,src);
        setInsert.insert(firstPair);
        distance[src]=0;

        while(!setInsert.empty()){
            auto topElement= setInsert.begin();
           pair<int,int> topPair = *topElement;
           int topDist= topPair.first;

            int topNode = topPair.second;
            setInsert.erase(topElement);


            for(auto neighbours:adjlist[topNode]){
                int neighbourElement = neighbours.first;
                int neighbourDistance = neighbours.second;

            if(topDist+neighbourDistance<distance[neighbourElement]){
                auto previousEntry = setInsert.find({distance[neighbourElement],neighbourElement});
               
            }

            }

        }

        cout<<"the distance is "<<distance[dest];
    

       

    }
    
};

int main(){

    Graph g;
    g.addEdge(1,2,7,0);
    g.addEdge(1,3,9,0);
    g.addEdge(1,6,14,0);
    g.addEdge(2,4,15,0);
    g.addEdge(2,3,10,0);
    g.addEdge(3,4,11,0);
    g.addEdge(6,5,9,0);
    g.addEdge(6,3,2,0);
    g.addEdge(5,4,6,0);



    g.display();

    cout<<endl;

    g.djstrk(6,6,4);

    // cout<<endl<<"the topological sort begin here man";

    // unordered_map<int,bool> isVisited;
    // stack<int> st;

    // for(int i=0;i<=4;i++){
    //     if(!isVisited[i]){
    //         g.topo(i,isVisited,st);
    //     }
    // }
    // cout<<endl<<"printing topological sort from stack"<<endl;
    
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }   
    // cout<<endl<<"the Shortest path:"<<endl;

   





}