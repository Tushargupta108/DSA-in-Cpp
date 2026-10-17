#include<bits/stdc++.h>
using namespace std;
void tolower(string &s ,int idx){

  if(idx==s.size()){
    return;
  }
  s[idx] = 'a' + s[idx] - 'A';
  return tolower(s,idx+1);

}
int main(){
    string s="TUSHAR";
    int idx=0;
    tolower(s,idx);
    cout<<"lower case conversion:"<<s;
}