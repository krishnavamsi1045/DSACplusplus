#include <iostream>
#include <vector> // Include vector header file here

using namespace std;

bool isRoute(int maze[4][4], int newx, int newy, int row, int col,vector<vector<bool>> isvisited) {
    if ((newx >= 0 && newx < row) && (newy >= 0 && newy < col) && maze[newx][newy] == 1 && isvisited[newx][newy] == false) {

        return true;
    } else {
        return false;
    }
}

void findingPath(int maze[4][4], int row, int col, int curx, int cury, string ans,vector<vector<bool>> isvisited) {
    if (curx == row - 1 && cury == col - 1) {
        cout << ans << endl;
        return;
    }
    int newx = curx;
    int newy = cury + 1;
    //right
    if (isRoute(maze, newx, newy, row, col,isvisited)) {
        isvisited[newx][newy]==true;
       
       findingPath(maze,row,col,newx,newy,ans+"right",isvisited);
       isvisited[newx][newy]==false;
    }

   //left
   newx = curx;
   newy = cury-1;
   if(isRoute(maze,newx,newy,row,col,isvisited)){
    isvisited[newx][newy]==true;
    findingPath(maze,row,col,newx,newy,ans+"left",isvisited);
    isvisited[newx][newy]==false;
   }

   //top
   newx=curx-1;
   newy=cury;
   if(isRoute(maze,newx,newy,row,col,isvisited)){
     isvisited[newx][newy]==true;
    findingPath(maze,row,col,newx,newy,ans+"top",isvisited);
    isvisited[newx][newy] ==false;
   }

   //down
   newx=curx+1;
   newy=cury;
   if(isRoute(maze,newx,newy,row,col,isvisited)){
    isvisited[newx][newy]==true;
    findingPath(maze,row,col,newx,newy,ans+"down",isvisited);
    isvisited[newx][newy] ==false;
   }

}

int main() {

    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };

    int row = 4;
    int col = 4;
    int curx = 0;
    int cury = 0;

    vector<vector<bool > > isvisited(row, vector<bool>(col, false));

    if (maze[curx][cury] == 0) {
        cout << "gate is closed man" << endl;
    } else {
       findingPath(maze,row,col,curx,cury,"",isvisited);
    }

    return 0;
}
