#include<bits/stdc++.h>
using namespace std;
int   countsubsetsumequaltotarget(vector<int>&v,int index,int target){
       
       if(index==v.size()){
        // jab  last level par ho tha
        if(target==0){
            return 1;
        }
        // ye retrun back in backtracking when 1+0 retrun 1 , 1+1 rerturn 2 they return till top of tree 
        return 0;
       }

       return  countsubsetsumequaltotarget(v,index+1,target)+ countsubsetsumequaltotarget(v,index+1,target-v[index]);
}
int main(){
    vector<int>v={3,4,5,6,2};
    int target=12;
    int count=countsubsetsumequaltotarget(v,0,target);
    cout<<"total no of subsets whose count equals to target are "<<count;
}