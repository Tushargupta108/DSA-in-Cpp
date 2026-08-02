#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,45,6,3,4,56,2,8,9,2,3,4,3,4,2,45};
    int i=0;
    int j=1;
    sort(v.begin(),v.end());
    while(j<v.size()){
        if(v[j]!=v[i]){
            // pahle pointer aage badhao fri store unique ele
            i++;
            v[i]=v[j];
        }
        // agar same   ele h to aage badho 
        j++;
    }
    for(int a=0;a<=i;a++){
        cout<<v[a]<<" ";
    }
}