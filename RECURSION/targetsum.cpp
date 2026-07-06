#include<bits/stdc++.h>
using namespace std;
bool find(vector<int>&v,int index,int target){
    if(index==v.size()||target<0){
        return 0;
    }
    if(target==0){
        return 1;
    }

    return find(v,index+1,target)||find(v,index+1,target-v[index]);
    //  or operation call first is when  element not included and 2nd when element include 
    // jaise hi target ==0 ho jayega uper 1 return kar dega  ya agar target negative to upar return 0
}
int main(){
    // in this problem we willl subset of given super set has sum equal to target 
    // in this fe use or operation in travesing in a recursive tree bcz if any side of tree we got true then it reduce to genrate another side of tree
    // aas if we need true then if one side give it true no need to traverse other side
    vector<int>v={3,4,5,6};
    int target=13;
    cout<<find(v,0,target);
}