// VERY VERY IMPORTANT LEETCODE HARD 76
#include<bits/stdc++.h>
using namespace std;
int main(){
string s="ADOBECODEBANC";
string t="ABC";
// find min len sb str in s which contains all chatr of t even duplicates if 2a then s have 2 a also
int total=t.size();
// this will  require to  mark how many chars of t found in s

unordered_map<char,int>m;
int start=0;
int end=0;
int index=-1;
int minlen=INT_MAX;
for(int i=0;i<t.size();i++){
    m[t[i]]++;
}
while(end<s.size()){
    m[s[end]]--;
    // when char enter in window means no requirement total -
    // mappin gin crease when requirement of char  increase
    if(m[s[end]]>=0){
        //  // Required character found
        total--;
        // both total req dec and   m[s[end]]--; at same time
    }
    while(total==0){
       if(minlen>end-start+1){
        minlen=end-start+1;
        index=start;
       }
       //when char goes out of window their req increase
       m[s[start]]++;
       if(m[s[start]]>0){
        // if req increase total increase
        total++;
       }
       start++;
    }
   
   

    end++;
}
if(index == -1){
    cout << "No window found";
}
else{
    cout << s.substr(index, minlen);
}
}