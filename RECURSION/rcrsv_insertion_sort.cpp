#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int>&v,int i,int j){
    if(i==v.size()-1){
        return;
    }
    if(j<1){
        //  element ko uski jagh jab to wo apne prev se chota n ho  wahan tak agar j <1 aajaye to 1 pass ho chuka h
        return insertion(v,i+1,i+2);
    }
    if(v[j]<=v[j-1]){
        swap(v[j],v[j-1]);
        insertion(v,i,j-1);
    }
    else{
        insertion(v,i,j+1);
    }
   

}
int main(){
    vector<int>v={5,4,3,2,1};
    // select i  j and j+1 and compare and swap unitll it will not smaller than its prev ele than that arr[j]
    insertion(v,0,1);
    for(auto c:v){
        cout<<c<<" ";
    }
}