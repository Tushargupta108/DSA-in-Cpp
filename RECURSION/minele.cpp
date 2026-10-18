#include<bits/stdc++.h>
using namespace std;
int minele(vector<int>&arr,int idx){
  
 if(idx==arr.size()-1){
    return arr[idx];
 }
//  jab idx last ele par hoga tab us ele ko return karega and last return condition check min of previous and lst ele

  return min(arr[idx],minele(arr,idx+1));
//   present array ele and nexr ele m se jo chota wo return 

}
int main(){
    vector<int>arr={5,4,3,2,1};
    int idx=0;
    int min=minele(arr,idx);
    cout<<"minimum of arrays is:"<<min;
}