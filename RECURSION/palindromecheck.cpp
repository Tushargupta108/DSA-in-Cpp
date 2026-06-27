#include<bits/stdc++.h>
using namespace std;
bool pali(string &s,int start,int end){
  if(start>=end){
    return true;
  }
  if(s[start]!=s[end]){
    return false;
  }
  return pali(s,start+1,end-1);

}

int main(){
    string s="madam";
    int start=0;
    int end=s.size()-1;
    bool palindrome=pali(s,start,end);
    cout<<palindrome;
}