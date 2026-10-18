// IMPORTANT -> LEETCODE 713
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,5,6,2};
    int k=100;
    // find total no of subarrays whose product are strictly less than k
    int start=0;
    int end=0;
    int product=1;
    int count=0;

    while(end<v.size()){
        product*=v[end];
        while(product>=k){
            product/=v[start];
            start++;
        }
        if(product<k){
            count+=end-start+1;
            // this addition of len is used to find count of single elements as well as whole window and pair of two ex 123 1 2 3 12 23 123
        }
        
        end++;
    }
    cout<<count;

}