// leetcode 209
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={2,3,1,2,4,3};
    int target=7;
    // find min size ka subarray whose sum equal to target
     int start=0;
     int end=0;
     int sum=0;
     int minlen=a.size()+1;
     while(end<a.size()){
          sum+=a[end];
          while(sum>=target){
            if(sum==target){
                minlen=min(minlen,end-start+1);
            }
            sum-=a[start];
            start++;
          }
        end++;
     }
     cout<<minlen;
}