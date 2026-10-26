#include<bits/stdc++.h>
using namespace std;
bool linearsearch(vector<int>arr,int idx,int x){
    if(idx==arr.size()){
        return 0;

    }
    if(arr[idx]==x){
        return 1;
    }
    return linearsearch(arr,idx+1,x);
}
int  main(){
    vector<int>arr={7,1,5,8,7,6,2,3,9};
    int idx=0;
    int target=9;
    cout<<linearsearch(arr,idx,target);
}