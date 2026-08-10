// very very important concept in prefix sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={23,2,4,6,7};
    // unorderd map used to store modulas of every prefixsum and their indexes 
    // good array is that if its sum equlas r=to the divisble of k
    int k=4;
    // modulas is used as whose prefix sum modulo is same means they elements sum from there are divisibel bhy that k
    int prefixsum=0;
    unordered_map<int,int>m;
    m[0]=-1;
    bool flag =false;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(m.find(prefixsum%k)!=m.end()){
            if(i-m[prefixsum%k]>=2){
                flag=true;
                break;
            }
        }
        m[prefixsum%k]=i;
    }
    cout<<flag;
    // agar prefix sum ka modulo k se kro and aage wohi remainder mil jaye to us remainder s new rem tak k sum divisible by k hoga
}
