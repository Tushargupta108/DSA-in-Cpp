#include<bits/stdc++.h>
using namespace std;
 int repeatelementsubsetsum(vector<int>&v,int index,int target){

    // base case
    if(index==v.size()||target<0){
      return 0;
    }
    if(target==0){
     return 1;
    }
    return repeatelementsubsetsum(v,index+1,target)+repeatelementsubsetsum(v,index,target-v[index]);
    // recursive call when element not selected + when element get selected unitl zero or negative
 }
int main(){
    vector<int>v={3,4,2};
    int target=6;
    int index=0;
    // problem find subsets whose sum equals to target condition is that elements in subsets can repeat hence we using the case where 
    //  using + operation where counts bcm zero it returns 1 hene theyy sum up in top of tree and index repeats if it has been taken  untill sum bcm zero or negative
    int count=repeatelementsubsetsum(v,0,target);
    cout<<count;
}