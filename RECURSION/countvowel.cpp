#include<bits/stdc++.h>
using namespace std;
int vowel(string &s,int idx,int count){
   if(idx==s.size()-1){
    return count;
   }
   if(s[idx]=='a'||s[idx]=='e'||s[idx]=='i'||s[idx]=='o'||s[idx]=='u'){
    count++;
   }
   return vowel(s,idx+1,count);
   
}

int main(){
    string s="cristhopher";
    int idx=0;
    int count=0;
    cout<<(vowel(s,idx,count));

}