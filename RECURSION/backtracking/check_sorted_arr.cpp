
#include <bits/stdc++.h>
using namespace std;
 bool sorted(vector<int>&arr,int index,int n){
    if(index==n-1){
        return 1;
    }
    if(arr[index]<arr[index+1]){
        return sorted(arr,index+1,n);
    }
    return 0;

 }
int main(){
    vector<int>arr={1,2,3,4,5,7,8,9};
    int n=arr.size();
    sorted(arr,0,n);
    
    if(sorted(arr,0, n))
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";
}