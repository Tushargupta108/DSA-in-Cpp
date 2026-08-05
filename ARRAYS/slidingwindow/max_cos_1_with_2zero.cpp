#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,1,1,0,0,0,1,1,1,1,0};
    int zero_allowed=2;
    int start=0;
    int end=0;
    int count=0;
    int maxcount=0;
    while(end<arr.size()){
        if(arr[end]==0){
            count++;
        }
        while(count>zero_allowed){
            if(arr[start]==0){
                count--;
            }
            start++;
        }

        
        maxcount=max(maxcount,end-start+1);
        // always counting lenth  from end pointer to start pointer
        end++;
    }
    cout<<maxcount;

}