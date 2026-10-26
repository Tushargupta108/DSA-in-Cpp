#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>sortedarray={-4,-3,0,1,4,5,10};
    // using two pointer it takes less time complexity in O(N) 
    int left=0;
    int right=sortedarray.size()-1;
    int index=sortedarray.size()-1;
    vector<int>res(sortedarray.size());
    while(left<=right){
        if(abs(sortedarray[left])<abs(sortedarray[right])){
            res[index]=sortedarray[right]*sortedarray[right];
            index--;
            right--;
        }
        else{
            res[index]=sortedarray[left]*sortedarray[left];
            left++;
            index--;
        }
    }
    for(auto x:res){
        cout<<x<<" ";
    }
}