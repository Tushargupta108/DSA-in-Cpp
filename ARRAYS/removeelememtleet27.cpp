#include<bits/stdc++.h>
using namespace std;
 int main(){
    //problem -givenn an arr and val remove that value and rtrn no of  elements after removing from arr
    vector<int>arr={0,1,2,2,3,0,4,2};
    int value=2;
    int count=0;
    vector<int>ans;

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=value){
            count++;
            ans.push_back(arr[i]);
        }
    }

    cout<<" elements who are not equal to value are:"<<count<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
 }