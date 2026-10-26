#include<bits/stdc++.h>
using namespace std;
int main (){
    string s="AABABBA";
    int allow_char_to_replc=1;
    // approach jaise jaise end  badega window increase hogi  so find max ele of each window and find end jahan par h wahan se start tak
    // 1windo hogi then - max ele of that window if > char need to replace > allowed char  simply window aage badhao and
    int start=0;
    int end=0;
    int maxchar=0;
    int maxlen=0;
    vector<int>freq(26,0);
    while(end<s.size()){
        freq[s[end]-'A']++;
        maxchar=max(maxchar,freq[s[end]-'A']);
        while((end-start+1)-maxchar>allow_char_to_replc){
            freq[s[start]-'A']--;
            start++;
        }
        if((end-start+1)-maxchar==allow_char_to_replc){
            maxlen =max(maxlen,end-start+1);
        }
        end++;
    }
    cout<<maxlen;

}