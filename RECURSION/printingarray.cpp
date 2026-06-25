#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&arr,int idx){
    if(idx==arr.size()){
        return;
    }
    cout<<arr[idx]<<" ";
    print(arr,idx+1);
}
int main(){
    vector<int>arr={5,4,3,2,1};
    int idx=0;
    print(arr,idx);
}