//IMPORTANT LEETCODE 930
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>binary={0,0,0,1,0,0,1,1};
    int goal=2;
    // problem is thart count total number if subaarays whose sum is equal to goal 
    // but twist is that when zero comes it does not affect sum hence jitne zero honge utne subarray bhi jyadA honge
    int start=0;
    int end=0;
    int window_sum=0;
    int zero_count=0;
    int result=0;
    while(end<binary.size()){
        window_sum+=binary[end];
        while((window_sum>goal||binary[start]==0)&& start < end){
            if(binary[start]==0){
                zero_count++;
            }
            else{
                zero_count=0;
            }
            window_sum-=binary[start];
            start++;
        }
        if(window_sum==goal){
            result+=1+zero_count;
        }
        end++;
        
    }
    cout<<result;

}
