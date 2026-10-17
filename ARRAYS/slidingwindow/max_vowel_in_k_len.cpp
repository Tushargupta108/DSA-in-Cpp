#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="abciiidef";
    int len=3;
    int start=0;
    int end=0;
    int count=0;
    int maxcount=INT_MIN;
    while(end<a.size()){
        if(a[end]=='a'||a[end]=='e'||a[end]=='i'||a[end]=='o'||a[end]=='u'){
            count++;
        }
        if(end-start+1==3){
            maxcount=max(maxcount,count);
            if(a[start]=='a'||a[start]=='e'||a[start]=='i'||a[start]=='o'||a[start]=='u'){
              count--;
           }
           start++;
        }
        end++;
    }
    cout<<maxcount;
}