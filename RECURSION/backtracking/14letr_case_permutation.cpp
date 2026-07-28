#include<bits/stdc++.h>
using namespace std;
bool isletter(char c){
   if(c>='a'&&c<='z' || c>='A'&&c<='Z'){
    return true;
   }
   return false;
}
void solve(string &s,int index,string &temp, vector<string>&ans){
    if(index==s.size()){
        ans.push_back(temp);
        return ;
    }
    //  If current character is a letter, branch into BOTH lowercase and uppercase
    if(isletter(s[index])){
        // lowercase choice
        temp.push_back(tolower(s[index]));
        solve(s,index+1,temp,ans);
        temp.pop_back();
        // uppercase choice
        temp.push_back(toupper(s[index]));
        solve(s,index+1,temp,ans);
        temp.pop_back();
    }
    else{
        // agar wo letter k alwa digit ya kuch or h to use ese hi daal to or aage badho
        temp.push_back(s[index]);
        solve(s,index+1,temp,ans);
        temp.pop_back();
    }
}
int main(){
    string s="a1b2";
    // leetcode784 you can transform every letter individually to be lowercase or uppercase to create another string.Return a list of all possible strings we could create. Return the output in any order.
    string temp="";
    vector<string>ans;
    solve(s,0,temp,ans);
    for(auto x:ans){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }
 
}