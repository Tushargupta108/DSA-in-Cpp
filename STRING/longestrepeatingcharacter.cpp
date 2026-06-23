#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="AABABBA";
    int start=0;
    int k=1;
    // k =>no of change allow
    int end=0;
   int maxlen=0;
   int maxchar=0;
   int maxfreq=0;
    vector<int>freq(26,0);
    // used to find maxfreq element in a particular window jab tak replacemnt jarurat se jayada ho rahe ho 
    // agar replacement according to req ho rahe ho tab max len calculate karo agar kisi window m sabse jayada ele aya h to obvious baat h wahi max len substrng de sakta h
    // so when window size-freq>k  then window gets shrink 
      
        while(end<s.size()){
            freq[s[end]-'A']++;
           maxchar=max(maxchar,freq[s[end]-'A']);
            while((end-start+1)-maxchar>k){
                freq[s[start] - 'A']--;
                start++;
            }
           maxlen=max(end-start+1,maxlen);
           end++;
        }
        // pahle  maxlen calculate karta rahega jab tsk requiremnt k ya usse kam h jab usse jyada hogi tab  window shrink karega .
     
     cout<<maxlen;
}