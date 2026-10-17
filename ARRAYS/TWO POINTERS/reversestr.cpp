#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="tushargupta";
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    for(auto x:s){
        cout<<x;
    }
}
