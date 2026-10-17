#include<bits/stdc++.h>
using namespace std;
void findsubaaray(vector<int>&arr,int start,int end,int k,int &count){
    int product=1;
    while(end<arr.size()){
        // window expanding
       product*=arr[end];
       while(product>=k){
        // window shrinking when condition out of control
        product/=arr[start];
        // 2*5*3=30 ==k then divide 30/2 =15=5*3
        start++;
       }
       count+=end-start+1;
    //    counts all pairs of subarray whose prod < k and contain all single ele 
       end++;
    }
    return ;
}

int main(){
  vector<int>arr={2,5,3,10};
   int k = 30;
   int count=0;
   findsubaaray(arr,0,0,k,count);
   cout<<"total no of subarrays whose sum <k are "<<count;
}
