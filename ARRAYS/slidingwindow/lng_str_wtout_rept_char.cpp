#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="abcabcb";
    int maxlen=0;
    int start=0;
    int end=0;
    unordered_map<char,int>m;
    
    while(end<a.size()){
        m[a[end]]++;
        while(m[a[end]]>1){
            m[a[start]]--;
            start++;
        }
        maxlen=max(maxlen,end-start+1);
        end++;
    }
    cout<<maxlen;
}