#include <iostream>
using namespace std;
#include <vector>

bool isvisited(int maze [4][4],int row,int col,int curx,int cury,vector<vector<bool > > visited ){
    if((curx>=0 && curx<row) && (cury>=0 && cury<col) && maze[curx][cury]==1 && visited[curx][cury] ==false ){
        return true;
    }
    else {
        return false;
    }
}

void findingpath(int maze[4][4],int row,int col,int curx,int cury ,vector<vector<bool > > visited ,string ans){
    if(curx ==row-1 && cury ==col-1){
        cout<<ans<<endl;
        return;
    }
    //left
    int newx = curx;
    int newy = cury-1;
    if(isvisited(maze,row,col,newx,newy,visited)){
        visited[newx][newy]=true;
        findingpath(maze,row,col,newx,newy,visited,ans+"l");
        visited[newx][newy] =false;

    }
    //right
     newx = curx;
     newy = cury+1;
    if(isvisited(maze,row,col,newx,newy,visited)){
        visited[newx][newy]=true;
        findingpath(maze,row,col,newx,newy,visited,ans+"r");
        visited[newx][newy] =false;

    }
    //top
     newx = curx-1;
     newy = cury;
    if(isvisited(maze,row,col,newx,newy,visited)){
        visited[newx][newy]=true;
        findingpath(maze,row,col,newx,newy,visited,ans+"t");
        visited[newx][newy] =false;

    }
    //down
    
     newx = curx+1;
     newy = cury;
    if(isvisited(maze,row,col,newx,newy,visited)){
        visited[newx][newy]=true;
        findingpath(maze,row,col,newx,newy,visited,ans+"d");
        visited[newx][newy] =false;

    }
}

int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };

    int row = 4;
    int col =4;
    int curx =0;
    int cury = 0;

    vector<vector<bool > > visited (row,vector<bool>(col,false));

    if(maze[curx][cury]==0){
        cout<<"gate is closed man"<<endl;
    }
    else{
            findingpath(maze,row,col,curx,cury,visited,"");
    }
}