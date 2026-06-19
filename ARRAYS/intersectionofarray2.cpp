#include <bits/stdc++.h>
using namespace std;
int main(){
    // problem given two arrays we have to finsd common elements between them
    // arr1=1 2 3 4 
    // arr2= 2 2 3 
    // common elements are 2 and 3 
    vector<int>v1={1,2,2,3};
    vector<int>v2={2,3,3};
    vector<int>ans;
    //  count of ele in v2 should be equal to no of time of  occurance of same ele in v1
   unordered_map<int,int>m;
//    store freq of ele in key value format
for(int i=0;i<v1.size();i++){
    m[v1[i]]++;
    //store freqq of v1 in m
}
for(int i=0;i<v2.size();i++){
    if(m[v2[i]]>0){
       ans.push_back(v2[i]);
       m[v2[i]]--;
       // we remove this because no of same ele should same in both arr to finsd intersection
    }

}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

}