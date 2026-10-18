#include<bits/stdc++.h>
using namespace std;
string combination(string &s, vector<string>&serial,int index,string temp){
    if(index==s.size()){
      return temp;
    }
    string atindex=serial[s[index]-'0'];
   //  stores string mapped to each index of user dial string ex 2-def
    temp+=atindex;
   //  temp me at index string add kro it will store all combination of user dial numbers
   return combination(s,serial,index+1,temp);
}
int main(){
   string s="234";
   //given string which represent what user dial 
   vector<string>serial={{"."},{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tu"},{"vwx"},{"yz"}};
   string temp="";
   cout<<" comination of charactere related to dial numbers are  "<<combination(s,serial,0,temp);
}