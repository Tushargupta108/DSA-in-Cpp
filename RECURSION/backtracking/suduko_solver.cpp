#include<bits/stdc++.h>
using namespace std;
bool validcell(vector<vector<int>>&board,int row,int column,int num){
    // check num present in same row or not
    for(int j=0;j<9;j++){
        if(board[row][j]==num){
            return false;
        }
    }
    // check num does not repeat in same column
    for(int i=0;i<9;i++){
        if(board[i][column]==num){
            return false;
        }
    }
    // check in same box of size 3*3 num not repeat
    // how to find refrenced cell belong to which box every box start and end as multiple of 3 as their size is 3 by 3
    // hence starting row of that box will be ((refrence row)/3)*3 as 4,5 cell is refrence then it will belong from the box 
    // strtng row of box is(4/3)*3=3 strtng col of that box will (5/3)*3=3 hence box strts from 3,3 and end as 3+2 row and 3+2 colum 
    // means end cel is 5,5
    int strtng_row=(row/3)*3;
    int strtng_column=(column/3)*3;
    for(int a=strtng_row;a<=strtng_row+2;a++){
        for(int b=strtng_column;b<=strtng_column+2;b++){
            if(board[a][b]==num){
               return false;
            }
        }
    }

    return true;
}

bool find(vector<vector<int>>&board,int n,int row,int column){
    // base case 
    if(row==9){
        return true;
        // jab pointer 8th idx poora karke 9 par jay means suduko is complety fromed no further neeed to backtracking
    }
    if(column==9){
        return find(board,n,row+1,0);
    }
    if(board[row][column]!=0){
       return find(board,n,row,column+1);
    }   
    // else agar koi condition fill nahi hui to us row column h int i fill karo  
        for(int i=1;i<10;i++){
            // agar sudoku board khali mile tab 1 se 9 k beech jo fit ho use bharo
            if(validcell(board,row,column,i)!=false){
                // agar num from 1 to 9  us cell m fit ho sakte h to 
                board[row][column]=i; 
            
            if(find(board,n,row,column+1)==true){
                return true;
                //agar hm next cell m kuch fill kar pa rhe h to return true nahi to backtrack karke peeche jao
            }
            //backtrack
            board[row][column]=0;
          }
            

        }
    
    return false;
}
void solvesuduko(vector<vector<int>>&board ){
    int n=board.size();
    int row=0;
    int column=0;
    find(board,n,row,column);
}
int main(){
    // You are given a partially filled 9 × 9 Sudoku board, where empty cells are represented by 0.
// Your task is to fill all empty cells so that the completed Sudoku satisfies the following rules:
// Each row contains every digit from 1 to 9 exactly once.
// Each column contains every digit from 1 to 9 exactly once.
// Each 3 × 3 subgrid contains every digit from 1 to 9 exactly once
vector<vector<int>> board = {
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0}
};
  solvesuduko(board);

   cout<< "Solved Sudoku:\n\n";

    for (auto &row : board) {
        // row is  {3, 0, 6, 5, 0, 8, 4, 0, 0},
        for (auto cell : row) {
            // cell are 3 0 6 5 0 8 4 0 0 
            cout << cell << " ";
        }
        cout << endl;
    }
}