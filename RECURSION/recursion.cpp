
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>arr,int start,int end,int target){
    
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]<target){
        return binarysearch(arr,mid+1,end,target);
    }
    else if(arr[mid]>target){
        return binarysearch(arr,start,mid-1,target);
    }
    else{
        return mid;
    }
}
int main(){
 vector<int>arr={2,4,6,8,10,12};
 int target=12;
 cout<<"TARGET FIND AT THIS INDEX : "<<binarysearch(arr,0,arr.size(),target);
}
