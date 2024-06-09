#include <iostream>
using namespace std;
#include <vector>
#include <queue>


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    
   while(!q.empty()){
    cout<<q.front();
    q.pop();
   }
}
