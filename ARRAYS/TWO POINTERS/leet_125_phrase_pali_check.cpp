#include <bits/stdc++.h>
using namespace std;
bool isalphanumeric(char c){
    if(tolower(c)>='a'&& tolower(c)<='z'||c>='0'&&c<='9')
    // agar koi number h ya koi apjhabet h chota karne ke baad
    return true;
    return false;
}
bool checkpalindrome(string &s){
     int start=0;
     int end=s.size()-1;
     while(start<end){
        char c=s[start];
        if(!isalphanumeric(c)){
           start++;
        //    left side wala char check  agar wo alphanumeric ki jahgh koi aur char t o use chod kar aage wala compare kro

          continue;
        }
        
        if(!isalphanumeric(s[end])){
           end--;
        //    right side wala char check 
          continue;
        }
        // jab dono  side s string applicable ban jaye means wo aplphanumeric hi h
        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }
        start++;
        end--;
       

     }   
     return true;
}
int main(){
    string phrase="A man,@@@###$$$%%% a plan, a canal: ,,,;;;:::''' Panama";
    // ONLY CHECK AFTER CONVERTING ALL CHAR TO LOWERCASE AND LEAVE CAHR OTHER THAT ALPHANUMERIC 
    cout<<"string is alphanumeric and "<< checkpalindrome(phrase);
    

}