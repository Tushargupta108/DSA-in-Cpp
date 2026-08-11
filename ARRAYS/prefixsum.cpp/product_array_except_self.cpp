// leetcode 238 IMPORTANT
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4};
    //  wrtite rpdcut of whole arrray except at which you are present
    //  24 12 8 6
    int n=v.size();
    vector<int>result(n,1);
    vector<int>left(n,1);
    vector<int>right(n,1);
    left[0]=1;
    right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=v[i-1]*left[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=v[i+1]*right[i+1];
    }
    for(int i=0;i<n;i++){
        result[i]=left[i]*right[i];
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}