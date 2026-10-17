#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr,int i,int j){
    if(i==arr.size()-1){
        return;
    }
    if(j==arr.size()-1-i){
        // After pass i, the last i elements are already sorted
        bubblesort(arr,i+1,0);
        return;
        //   after first iteration i increase and j reset to index 0
    // when i changes menas one itration is done and har 1 itration m max ele last m pahunch jayega
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
   
        bubblesort(arr,i,j+1);
    
    
}
int main(){
   vector<int>arr={5,4,3,2,1};
   bubblesort(arr,0,0);
    for(auto x:arr){
        cout<<x;
    }
}