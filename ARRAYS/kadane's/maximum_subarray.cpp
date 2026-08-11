// leetcode 53
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    int prefixsum=0;
    int maxsum=0;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        maxsum=max(maxsum,prefixsum);
        if(prefixsum<0){
            prefixsum=0;
        }
    }
    cout<<maxsum;
}