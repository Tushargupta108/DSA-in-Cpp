#include<bits/stdc++.h>
using namespace std;
void movezeroend(string &s,int index,string &temp,string &zero){
    if(index==s.size()){
        return;
    }
    if(s[index]=='0'){
    zero.push_back('0');
    }
    else{
         temp.push_back(s[index]);
    }
    movezeroend(s,index+1,temp,zero);
    

}
int main(){
    string s="eriuh00enrfnf00";
     string temp;
    string zero="";
    movezeroend(s,0,temp,zero);
   
   string res=temp+zero;
   cout<<res;
    
   
}