#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,0,4,0,5,0,6,70,2,4,0};
    int start=0;
    int end=0;
    while(end<v.size()){
        if(v[end]!=0){
            swap(v[start],v[end]);
            start++;
        }
        end++;

    }
    for(auto x:v){
        cout<<x<<" ";
    }
}