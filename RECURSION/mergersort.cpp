#include<bits/stdc++.h>
using namespace std;
// merge both parts
void merge(vector<int>&arr,int start,int mid,int end){
    vector<int>temp(end-start+1);
    // create temp arr to store elements from both part left and right part store after comparison which is smaller
    int left=start;
    int right=mid+1;
    int index=0;
    // compare and fill in temp arr
    while(left<=mid&&right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }
        else {
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    // comparison k bad agar left wala arrya right se bada tha to uske bache hue temp m dalo 
    while(left<=mid){
        temp[index]=arr[left];
        left++;
        index++;
    }
    // // comparison k bad agar right wala array left se bada tha to uske bache hue temp m dalo 
    while(right<=end){
        temp[index]=arr[right];
        right++;
        index++;
    }
    // now store back temp sorted arr to main array
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
    
}
// divides in left and right part
void mergesort(vector<int>&arr,int start,int end){
   
   if(start>=end){
    return;
   }
//    when aasre elements single ho ajyenge b/c single ele are sorted
   int mid=start+(end-start)/2;
//    overcome interger overflow
   mergesort(arr,start,mid);
   // divide into left part
   mergesort(arr,mid+1,end);
//    divide into right part
   merge(arr,start,mid,end);
//    after division till sinlge unit now go back in main fun and merger them in increasing order
}  
int main(){
    vector<int>arr={9,6,35,97,5,8,9,7,2,7,2};
    mergesort(arr,0,arr.size()-1);
    cout << "Sorted array: ";

    for(auto x : arr){
       cout << x << " ";
    }
}