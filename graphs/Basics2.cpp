#include <iostream>
using namespace std;
#include <unordered_map>
#include <map>
#include <list>
#include <queue>
#include <vector>
#include <stack>


class Graph {
   public:
   unordered_map<int,list<int> > adjlist;
   int src;
   int dest;
   bool isDirected;

   
   void addEdge(int src,int dest,bool isDirected ){
    if(isDirected){
        adjlist[src].push_back(dest);
        adjlist[dest].push_back(src);
    }
    else{
        adjlist[src].push_back(dest);
    }
   }

   void Display(){
    for(auto i:adjlist){
        cout<<i.first<<":{";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<" },"<<endl;
    }
   }


    bool isCycle(int n){
        unordered_map<int,bool> isVisited;
        queue<int> q;
        unordered_map<int,int> parent;
        q.push(n);
         parent[n] = -1;
          isVisited[n] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto neighbour:adjlist[curr]){
                if(!isVisited[neighbour]){
                   
                parent[neighbour] = curr;
                isVisited[neighbour] = true;
                q.push(neighbour);
               
                }

                else if(isVisited[neighbour] && parent[curr] != neighbour){
                    return true;
                }
                

                }
            }
            return false;
        }
//DFs
        void topologicalSort(int src,unordered_map<int,bool>&isVisited,stack<int> &st){
            isVisited[src] = true;

            for(auto neighbour:adjlist[src]){
                if(!isVisited[neighbour]){
                    topologicalSort(neighbour,isVisited,st);
                }
            }
            st.push(src);

        }

//Bfs //kahn algorithm
        void topoSort(int n){
           map<int,int> indeg;
           queue<int> q;
           //creating inDegree
           for(auto i:adjlist){
            for(auto ele:i.second){
                indeg[ele]++;
            }
           }
           //
            for(int i=0;i<n;i++){
                if(indeg[i]==0){
                    q.push(i);
                }
            }
             //inserting in queue
              while(!q.empty()){
                int front = q.front();
                cout<<front<<" ";
                q.pop();
                for(auto neighbour:adjlist[front]){
                    indeg[neighbour]--;

                    if(indeg[neighbour]==0){
                        q.push(neighbour);
                    }
                }

            }
          


        }

        //shortest path //bfs
       void shortest(int src,int dest){
        map<int,int>parent;
        map<int,bool>isvisited;
        queue<int> q;
        q.push(src);
        isvisited[src] = true;
        parent[src] = -1;

        while(q.empty()){
            int front = q.front();
            q.pop();
        for(auto i:adjlist[front]){
            if(!isvisited[i]){
                parent[i]=src;
                isvisited[i] = true;
                q.push(i);
            }
        }
       }
       vector<int> v;
       while(dest !=-1){
        v.push_back(dest);
        dest=parent[dest];
       }

       reverse(v.begin(),v.end());
       for(auto i:v){
        cout<<i<<",";
       }

    
       }


};



int main(){


    Graph g ;
   g.addEdge(0,1,0);
   g.addEdge(0,3,0);
   g.addEdge(0,4,0);
   g.addEdge(1,2,0);
   g.addEdge(3,5,0);
   g.addEdge(4,6,0);
   g.addEdge(2,5,0);
   g.addEdge(6,5,0);

   g.shortest(0,5);

   
   


    // Graph g;
    // g.addEdge(0,1,1);
    // g.addEdge(1,2,1);
    // g.addEdge(2,3,1);
    //  g.addEdge(3,4,1);
    // g.addEdge(3,5,1);
   
    // g.addEdge(4,6,1);
    // g.addEdge(6,7,1);

    // g.Display();

    // stack<int> st;
    // unordered_adjlist<int,bool> isVisited;

    // for(int i=0;i<=6;i++){
    //    if(!isVisited[i]){
    //     g.topologicalSort(i,isVisited,st);
    //    }
    // }
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }


    // Graph g ;
    // g.addEdge(0,1,0);
    // g.addEdge(1,3,0);
    // g.addEdge(1,2,0);
    // g.addEdge(1,0,0);
    // g.addEdge(2,1,0);
    // g.addEdge(2,4,0);
    // g.addEdge(2,5,0);
    // g.addEdge(3,4,0);
    // g.addEdge(4,3,0);
    // g.Display();
    // if(g.isCycle(0)){
    //     cout<<"This is a cycle graph"<<endl;
    // }
    // else{
    //     cout<<"not a cyclic graph";
    // }





   
    // Graph *g = new Graph();
    // g->addEdge(1,2,1);
    // g->addEdge(2,4,1);
    // g->addEdge(4,3,1);
    // g->addEdge(3,1,1);

    // g->Display();

    // UGraph ug;
    // ug.addEdge(1,2,1,1);
    // ug.addEdge(2,4,1,1);
    // ug.addEdge(3,1,1,1);
    // ug.addEdge(4,3,1,1);

    // ug.Display();


}