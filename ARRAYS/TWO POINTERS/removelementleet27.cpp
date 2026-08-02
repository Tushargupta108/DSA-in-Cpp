#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1,2,2,3,0,4,2};
    int value=2;
   //problem is thart remove value element from that array 
//    hence try to  move value element in the end
    int start=0;
    int end=0;
    while(end<v.size()){
        if(v[end]!=value){
            swap(v[start],v[end]);
            start++;
        }
        end++;

    }

    for(int i=0;i<start;i++){
        cout<<v[i]<<" ";
    }
}