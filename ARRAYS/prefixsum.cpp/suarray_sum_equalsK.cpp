// IMPORTANT leetcode 560
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,7,-4,2,1,3,4,-15,2,-3,6};
    int prefixsum=0;
    int count=0;
    int k=6;
    
    unordered_map<int,int>m;
    m[0]=1;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(m.find(prefixsum-k)!=m.end()){
          count+=m[prefixsum-k];
          // isse pahle required kitni baar aa chuka h
        }
        m[prefixsum]++;
    }
    cout<<count;
}