#include<bits/stdc++.h>
using namespace std;
int main(){
    // Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order
    string s="cbaebabacdcab";
    string t="abc";
    vector<int>ans;
    vector<int>freqa(26,0);
    vector<int>freqb(26,0);
    for(int i=0;i<t.size();i++){
        freqa[t[i]-'a']++;
    }
    int start=0;
    int end=0;
    while(end<s.size()){
        freqb[s[end]-'a']++;
        if(end-start+1==t.size()){
            if(freqb==freqa){
                ans.push_back(start);
            }
            freqb[s[start]-'a']--;
            start++;
        }
        end++;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}