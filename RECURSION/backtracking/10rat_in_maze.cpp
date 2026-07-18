#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&maze,int n,vector<vector<bool>>&visited,string path,vector<string>&ans,int i,int j){
    
// invalid cell
if(i<0 || j<0 || i>=n || j>=n || visited[i][j]==true || maze[i][j]==0){
    return;
    // agar i ya j outside boundry h ya pahle hi visit kar chuke h ya next cell 0 h jispar jana mna h to wahan se back return
}
// base condition 
if(i==n-1 && j==n-1){
    ans.push_back(path);
    return ;
    // agar rat apni dest par pahunch jaye
}
visited[i][j]=true;
// downward
path.push_back('D');
solve(maze,n,visited,path,ans,i+1,j);
path.pop_back();
// left
path.push_back('L');
solve(maze,n,visited,path,ans,i,j-1);
path.pop_back();
//right
path.push_back('R');
solve(maze,n,visited,path,ans,i,j+1);
path.pop_back();
// upward
path.push_back('U');
solve(maze,n,visited,path,ans,i-1,j);
path.pop_back();


// backtracking 
visited[i][j]=false;



}
int main(){
    // Problem
// Given an N x N maze where:
// 1 → Path (can move)
// 0 → Blocked cell
// A rat starts from the top-left cell (0,0) and has to reach the bottom-right cell (N-1,N-1).
// The rat can move in Up (U), Down (D), Left (L), and Right (R) directions. Find all possible paths from source to destination.
vector<vector<int>>maze={{1, 0, 0, 0}, 
                         {1, 1, 0, 1}, 
                         {1, 1, 0, 0}, 
                         {0, 1, 1, 1}};
int n=maze.size();                         

vector<vector<bool> >visited(n, vector<bool>(n, 0));    
string path;
vector<string>ans;
int i=0;
int j=0;
solve(maze,n,visited,path,ans,i,j);
// printing ans 
for(string s:ans){
    cout<<s<<endl;
}
}