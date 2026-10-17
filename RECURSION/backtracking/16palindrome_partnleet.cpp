#include<bits/stdc++.h>
using namespace std;
bool palindrome(string part){
    string b = part;
    reverse(b.begin(),b.end());
     if(part==b){
        return true;
    }
    return false;
}
void solve(string s,int n,vector<string>&temp,vector<vector<string>>&ans){
    if(s.size()==0){
        ans.push_back(temp);
        return;
    }
   
    
    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);
        // select  a string from right  always from index 0 side which will go  for palindrome check
        if(palindrome(part)){
            // jo palindrome  was wahi choose hogi baki rezt drop
           temp.push_back(s.substr(0,i+1));
           solve(s.substr(i+1),n,temp,ans);
        //    now pass rest of the string in right side fro checking palinfrome partionoing
        // pahle  1 ek element check hogha then call for next i bcz everytime when function call i start from idx 0 hence single element undergoes 
           temp.pop_back();
        }   
        
    }
   

}
    
int main(){
    string s="ababcaba";
    vector<vector<string>>ans;
    vector<string>temp;
    int n =s.size();
    solve(s,n,temp,ans);
    int mincuts=INT_MAX;
    for(int i=0;i<ans.size();i++){
            mincuts = min(mincuts, (int)ans[i].size() - 1);
            //  int conversion need bcz size rerurn unsighned cahr 
            //  - 1 bcz string size is 2 but cut min to 1 hi h agr size 3 cu to ek km hi lahgega
    }
 cout<< mincuts;
    
}
