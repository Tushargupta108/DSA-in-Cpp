// IMPORTANT - gfg
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={6,-1,-3,4,-2,2,4,6,-12,-7};
    // find total number of subarrays whose sum equlas to zero
    unordered_map<int ,int>m;
    m[0]=1;
    int count=0;
    int prefixsum=0;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(m.find(prefixsum)!=m.end()){
           count+=m[prefixsum];
        }
        m[prefixsum]++;
    }
    cout<<count;
}
