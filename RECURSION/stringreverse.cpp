#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int start,int end){
    if(start>=end){
       return ;
    }
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    return reverse(s,start+1,end-1);
    
}
int main(){
    string s="astor";
    int start=0;
    int end=s.size()-1;
     reverse(s,start,end);
    
        cout<<s;
     

}