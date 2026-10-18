#include<bits/stdc++.h>
using namespace std;
void selection(vector<int>&v,int i,int j){
   if(i==v.size()-1){
    return;
   }
   int small_index=i;
   if(j==v.size()){
        return selection(v,i+1,i+2);
   }
   if(v[i]>v[j]){
       small_index=j;
       selection(v,i,j+1);
   }
   swap(v[i],v[small_index]);
  
}
int main(){
    vector<int>v={5,4,3,2,1};
    //approach select one in starting and replace it will smaller element in rest of the array
    // har itration me samllest apni sahi jahag par pahunch jayega 
    selection(v,0,1);
    for(auto x:v){
        cout<<x<<" ";
    }
}