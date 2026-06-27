#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int start,int end){
  int position=start;
    for(int i=start;i<=end;i++){
      if(arr[i]<=arr[end]){
        swap(arr[position],arr[i]);
        position++;
      }
    }
    return position-1;

}
void quicksort(vector<int>&arr,int start,int end){
   if(start>=end){
    return;
   }
 int pivotindex=partition(arr,start,end);
 quicksort(arr,start,pivotindex-1);
 quicksort(arr,pivotindex+1,end);
}
int main(){
 vector<int>arr={7,9,8,3,7,1,6,0,3,6};
 quicksort(arr,0,arr.size()-1);
 cout<<"sorted array is :";
 for(auto x:arr){
  cout<<x;
 }
}
