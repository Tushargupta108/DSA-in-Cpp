#include<bits/stdc++.h>
using namespace std;

 int elesum(vector<int>&arr,int sum,int idx){
     if(idx==arr.size()){
        return sum;
     }
     sum= arr[idx]+elesum(arr,sum,idx+1);
     return sum;

 }

int main(){
    vector<int>arr={5,4,3,2,6};
    int sum=0;
    int idx=0;
    
    sum=elesum(arr,sum,idx);
    cout<<"total sum of elements of arr:"<<sum;


}