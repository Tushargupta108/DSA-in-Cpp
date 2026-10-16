#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {-2, -1, 0, 0, 1, 2};
    sort(nums.begin(), nums.end());
    int target = 0;
    vector<vector<int>>ans;
    for(int i=0;i<nums.size();i++){
        if(i>0&&nums[i]==nums[i-1])continue;
        for(int j=i+1;j<nums.size();j++){
           if(j>i+1 &&nums[j]==nums[j-1])continue;
        //    if j >i only then j not comparable with j-1 bc j-1 is i
           //i and j fixed now find remain two from two sum template,when 1 pair found then i fix and search all pairs after moving j forward then search for i  moving forward as well
           int start=j+1;
           int end=nums.size()-1;
           while(start<end){
            int  sum=nums[i]+nums[j]+nums[start]+nums[end];
            if(sum<target){
                start++;
            }
            else if(sum>target){
                end--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                start++;
                end--;

                while(start<end&&nums[start]==nums[start-1]){
                   start++;
                }
                while(start<end &&nums[end]==nums[end+1]){
                   end--;
                }
            }
            
           }

        }
    }
    for(auto x:ans){
        cout<<"four elements whose sum equlas to target are:"<<x[0]<<" "<<x[1]<<" "<<x[2]<<" " <<x[3]<< endl;

    }
}
