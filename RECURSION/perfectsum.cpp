#include<bits/stdc++.h>
using namespace std;
void find(vector<int>&v,int index,int target,int &count){
    // base condition when target ==0
    if(index==v.size()){
        if(target==0){
             count++;
            
        }
         return;
    }
    // include
    find(v,index+1,target-v[index],count);
    // not include
    find(v,index+1,target,count);
    // end of recursive tree we have all its subsets and also those who have target ==0 hence count here how many have target =0
}
int main(){
    // count no of subsets whose sum equal to target
    vector<int>v={3,6,5,6,4};
    int target=12;
    int count=0;
    find(v,0,target,count);
    cout<<count;
}