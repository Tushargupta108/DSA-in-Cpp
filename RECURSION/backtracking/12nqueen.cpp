#include<bits/stdc++.h>
using namespace std;
// problem is that you hav e given size of chess board and yo have to place n queens in that chess boards such that queen should not come in same row
//same column and not in same diagonal

// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
bool checkvalid(vector<string>&board,int i,int j,int n){
      //  these need to reasign again bcz we need to used same row and colum
    //fro checcking upper left diagonal
    int row=i;
    int column=j;
    // checking upper right diagonal
    while(row>-1&&column<n){
        if(board[row][column]=='Q'){
            return 0;
            // false rerturn
        }
        row--;
        column++;
    }
    // checking upper left
     row=i;
     column=j;
    while(row>-1&&column>-1){
        if(board[row][column]=='Q'){
            return 0;
        }
        row--;
        column--;
    }
    return 1;

}

void nqueenplace(int n,vector<vector<string>>&ans,vector<string>&board,vector<bool>&columncheck,int row){
// base condition jab row last idx par pahunch jaye 
if(row==n){
    ans.push_back(board);
    return;
}
// check for valid cell to place queen
for(int j=0;j<n;j++){
    if(columncheck[j]==0&&checkvalid(board, row, j,n)!=0){
        // mark whole column visited
        columncheck[j]=1;
        // place queen in board
        board[row][j]='Q';
        //  place queen in next row
        nqueenplace(n,ans,board,columncheck,row+1);
        // backtraking start when another queen doesnt find place it will adjust location of queen upper to it 
        columncheck[j]=0;
        board[row][j]='.';
    }
}
}
int main(){
cout<<"enter size of chess board";
int n;
cin>>n;
vector<vector<string>>ans;
vector<string>board(n,string(n,'.'));
vector<bool>columncheck(n,0);
//  0,1,2,3
// [0,0,0,0]  agar ek bhi column 1 ho gya to end to koi bhi queen place nahi hogi
// [0,0,0,0]
// [0,0,0,0]
// [0,0,0,0]
int row=0;
// row start after every funcrtion call pahle first row m 4 column me se ksibhi column m place then go fro next row and so on
// hence no need to send column itrate it in every function call to start from 0th idx to n-1 idx
nqueenplace(n,ans,board,columncheck,row);

for(int i=0;i<ans.size();i++)
{
    cout<<"Solution "<<i+1<<endl;

    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<endl;
    }

    cout<<endl;
}
}
