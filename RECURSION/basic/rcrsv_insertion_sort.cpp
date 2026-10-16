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
//    flow=>foirst check kya n-1 par h nahi second kya j swapp karte karte 0 idx apr aa gya kya agar aajaye tab fresh start third kya j 
// apne previous se chota ya barabar h to swap and j ghatao and fourth jab kya ta  4 5 3 6 6 is not less than its prev than handle this 
 // situation as us idx se aage walo dekho kya wo usse chota h (simply j  points to next if not lesss than prev found)

}
int main(){
    vector<int>v={5,4,3,2,1};
    // select i  j and j+1 and compare and swap unitll it will not smaller than its prev ele than that arr[j]
    insertion(v,0,1);
    for(auto c:v){
        cout<<c<<" ";
    }
}