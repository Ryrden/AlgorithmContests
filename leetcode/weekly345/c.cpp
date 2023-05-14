#include <bits/stdc++.h>

//Esse código não funciona -> A solução correta era com BFS

using namespace std;
int _maxMoves(
    vector<vector<int>> &grid, 
    int row,
    int col, 
    int res, 
    int cnt,
    int prevVal,
    ){
    if (row < 0 or col < 0 or row >= grid.size() or col >= grid[0].size()){
        return max(res,cnt);
    }
    if (prevVal >= grid[row][col]){
        return max(res,cnt);
    }
    res = _maxMoves(grid,row-1,col+1,res,cnt+1,grid[row][col]);
    res = _maxMoves(grid,row,col+1,res,cnt+1,grid[row][col]);
    res = _maxMoves(grid,row+1,col+1,res,cnt+1,grid[row][col]);
    return res;
}
int maxMoves(vector<vector<int>>& grid) {
    //can start anywhere in the first column
    int maxMoves = 0;
    for (int i = 0; i < grid.size(); i++){
        maxMoves = max(maxMoves,_maxMoves(grid,i,0,0,-1,0));
    }
    return maxMoves;
}

int main(){
    vector<vector<int>> ans1 = {
        {2,4,3,5},
        {5,4,9,3},
        {3,4,2,11},
        {10,9,13,15}
    };
    cout << maxMoves(ans1) << endl;

    vector<vector<int>> ans2 = {
        {3,2,4},
        {2,1,9},
        {1,1,7}
    };

    cout << maxMoves(ans2) << endl;

    return 0;
}