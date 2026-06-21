#include<bits/stdc++.h>
using namespace std;
int main(){
    // prablem is two strings given they should be mappped one to map if a char mapp with char of 2 stn then whenever it repeat it should mapped with that same char of 2nd stn
    string s1="paper";
    string s2="title";
    unordered_map<char,char>m1;
    unordered_map<char,char>m2;
    // these used to mapp cahr of s1 and s2
    bool flag=true;
    for(int i=0;i<s1.size();i++){
        if(m1.find(s1[i])!=m1.end()&&m1[s1[i]]==s2[i]){
            flag =false;
        }
        // check mapping of char of string 1 with s2
        // kya m1[s[i]] key present h agar h to kya wo s2 k smae char se map h
        if(m2.find(s2[i])!=m2.end()&&m2[s2[i]]==s1[i]){
            flag=false;
        }
        m1[s1[i]]=s2[i];
        m2[s2[i]]=s1[i];
        // mapped key with another string value
    }
    cout<<flag;
    
}