#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,12,-5,-6,50,3};
    int length=4;
    int start=0;
    int end=0;
    int  maxavg=INT_MIN;
    int sum=0;
    double avg=0;
    while(start<=end&&end<v.size()){
         sum+=v[end];
        if((end-start+1)==4){
           maxavg=max(maxavg,sum);
           sum-=v[start];
           start++;
        }
       end++;
    }
    avg=(double)maxavg/4;
    cout<<avg;
    // leetcode problem
}