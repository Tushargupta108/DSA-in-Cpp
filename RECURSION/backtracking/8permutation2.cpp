#include<bits/stdc++.h>
using namespace std;
// leetcode 47
void permutation(vector<int>&arr,vector<vector<int>>& ans,int index){
    vector<bool>used(21,0);
    // this vector is used to keep track of elements which are already visited  it contain elements from -10 mto 10 
    // this will help to reduce chances of not repeating elements  when  swapping with i in for loop
    // indexoing on it will be done as index+10 bcz positive number locates from idx 11 to 20
   if(index == arr.size()){
    ans.push_back(arr);
    return;
   }
    
 for(int i=index;i<arr.size();i++){
     if(used[arr[i]+10]==0){
        // if  arr element at 11th index to 20th is not visited  used when baktratking on rest of its indexes
        swap(arr[index],arr[i]);
        // ya to khud se swap hoga ya unique in right side s
        permutation(arr,ans,index+1);
        swap(arr[index],arr[i]);
        // baktraking
        used[arr[i]+10]=1;
        // marked as visited element
     }    
  }
}

int main(){
//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
// Example 1:
// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]
    vector<int>arr={1,2,2,1};
    vector<vector<int>>ans;
    permutation(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
           
        }
         cout<<endl;
    }
}