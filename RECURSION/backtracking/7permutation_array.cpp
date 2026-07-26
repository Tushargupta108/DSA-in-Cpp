#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&arr,vector<vector<int>>& ans,vector<bool>&visited,vector<int>&temp){
   if(temp.size() == arr.size()){
    ans.push_back(temp);
    return;
}
    for(int i=0;i<arr.size();i++){
         if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permutation(arr,ans,visited,temp);
          //  Every recursive call gets its own fresh for loop starting from i = 0.
        //The only thing that changes is the state (visited and temp).
            visited[i]=0;
            // backtracking karne k baad branch me se saare ele rmv so next branch may aquire from next index ele
            // backtracking steps reverse what we have done before calling recursive function
            temp.pop_back();
            //After finishing every branch beginning with 1
            //we return completely to the very first call.  now i=0 comleted for that function call its time for i=1
            
         }
    }
}

int main(){
    // A permutation is a different arrangement of the elements in aray.
    // Print all possible permutations of the array, one permutation per line.
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    vector<bool>visited(arr.size(),0);
    vector<int>temp;
    permutation(arr,ans,visited,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
           
        }
         cout<<endl;
    }
}