#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&arr,vector<vector<int>>& ans,int index){
   if(index == arr.size()){
    ans.push_back(arr);
    return;
}
    for(int i=index;i<arr.size();i++){
         swap(arr[i],arr[index]);
         permutation(arr,ans,index+1);
        //  pahle idx 0 1 2 tak jayegu=i then back tracking and run  i from that 
        //index to n  if at idx 1 then when in backtracking i swap with idx1 and i=1 then idx 1 with i=2 which is arr size
         swap(arr[i],arr[index]);
        //  backtracking 
    }
}

int main(){
    // A permutation is a different arrangement of the elements in aray.
    // Print all possible permutations of the array, one permutation per line.
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    permutation(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
           
        }
         cout<<endl;
    }
}