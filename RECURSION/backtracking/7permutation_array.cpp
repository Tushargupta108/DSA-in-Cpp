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
            visited[i]=0;
            // backtracking steps reverse what we have done before calling recursive function
            temp.pop_back();
            
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