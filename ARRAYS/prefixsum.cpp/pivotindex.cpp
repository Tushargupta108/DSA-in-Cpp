// leetcode 724
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,7,3,6,5,6};
    // pivot index is that from where  prefix sum == suffix sum
//    approach 1 O(N2)  
    //  for(int pivot=1;pivot<v.size();pivot++){
    //     int prefixsum=0;
    //     int suffixsum=0;
    //     for(int j=0;j<pivot;j++){
    //         prefixsum+=v[j];
    //     }
    //     for(int k=v.size()-1;k>pivot;k++){
    //         suffixsum+=v[k];
    //     }
    //     if(prefixsum==suffixsum){
    //         return pivot;
    //     }
    //  }


    // approach 2=>
    int total=0;
    int prefixsum=0;
    int suffixsum=0;
    int pivot =-1;
    for(auto x:v){
        total+=x;
    }
    for(int i=0;i<v.size();i++){
       suffixsum=total-prefixsum-v[i];
    //  - pivot -------
    //  -- pivot  -----
    //  --- pivot  ----
    //  ---- pivot  ---
    // prefixsum=total -suffixsum -v[n-1]
     if(prefixsum==suffixsum){
         pivot =i;
     }
     prefixsum+=v[i];
    }
    cout<<pivot;
}
