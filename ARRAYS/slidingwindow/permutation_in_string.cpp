#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="abcdabsd";
    string s2="sb";
    // problem is to find does permutation of string s2 present in string s1
    int start=0;
    int end=0;
    unordered_map<char,int>freqs1;
    unordered_map<char,int>freqs2;
    for(int i=0;i<s2.size();i++){
        freqs1[s2[i]-'a']++;
    }
    bool flag=false;
    while(end<s1.size()){
        freqs2[s1[end]-'a']++;
        if(end-start+1==s2.size()){
             if(freqs2==freqs1){
                flag=true;
                break;
                // mil chuka h aage check karne ki jaroorat nahi h
             }
             //agar freq match na ho to left side se 1 char jhatao and next permutation eindow check kro 
             freqs2[s1[start]-'a']--;

            if(freqs2[s1[start]-'a'] == 0)
               freqs2.erase(s1[start]-'a'); 
                // map me se extra space remove kro jo zero n gher rakhi h

             start++;
        }
        end++;
    }
    cout<<flag;
    // leetcode =>567
}