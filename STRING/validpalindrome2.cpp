#include<bits/stdc++.h>
using namespace std;
// core concept to check string is palindrome or not
bool checkremove(string s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// check when char from start and end mismatch that after skipping one char from start or skip from left remain the string palindrome
bool checkpalindromeafterremovingone(string s,int start,int end){
  while(start<end){  
   if(s[start]!=s[end]){
    // jqahan char mismatch wahan ek char skip from left or right and check for palindrome
       return checkremove(s,start+1,end)||checkremove(s,start,end-1);
    }
   start++;
   end--;
  }
  return true;
//   by default return true as upar sayad if condi check karne par wo exe hi n hui ho
}

int main(){
    // leet code -680 givrn a  string check wheater after removing only one character from anywhere does remain string is palindrome or not
    string s="abca";
    int start=0;
    int end=s.size()-1;
    bool result=false;
     result=checkpalindromeafterremovingone(s,start,end);
    cout<<"string after removing one cahr is:"<<result;
}