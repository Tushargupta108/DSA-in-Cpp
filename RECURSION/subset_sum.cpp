#include<bits/stdc++.h>
using namespace std;
void printsubsetsum(vector<int>&v,int index,int sum,int size){
    // base condition
    if(index==size){
        cout<<sum<<endl;
        return;
    }
    // if element include
    printsubsetsum(v,index+1,sum+v[index],size);
    // if ele,ent not included
    printsubsetsum(v,index+1,sum,size);
}
int main(){
    vector<int>v={3,4,5};
    // in this problem we will peint sum of each subsets of given proper set
    int index=0;
    int sum=0;
    int n=v.size();
    printsubsetsum(v,index,sum,n);
}