#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&arr,int n){
    if(n==arr.size()){
        return;
    }
    print(arr,n+1);
    cout<<arr[n]<<" ";


}
int main(){
    vector<int>arr={5,4,3,2,1};
    int n=0;
    print(arr,n);
}