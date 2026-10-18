#include<bits/stdc++.h>
using namespace std;
char duplicate(string &s,int index, vector<int>&visit){
    if(index==s.size()){
        return ' ';
    }
   
    if(visit[s[index]-'a']!=0){
        return s[index];
    }
    else{
        visit[s[index]-'a']=1;
       return  duplicate(s,index+1,visit);
    }
}

int main(){
    string s="juefkrubk";
     vector<int>visit(26,0);
   cout<<"char in string which is repeating is "<< duplicate(s,0,visit);
}