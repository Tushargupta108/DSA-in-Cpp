#include<bits/stdc++.h>
using namespace std;
bool isvalid(string str){
    if(str.size()>1 && str[0]=='0'){
        // aar single 0 ha string m to put . after single 0
        return false;
    }
    int val=stoi(str);
    if(val>255){
        // if range between 0 to 255 than push only in ip add hence only three choice rq either push 1 2 or 3 char 
        return false;
    }
    return true;
}
void solve(string &s,int index,int n,string temp,int parts,vector<string>&ans){
    // base case 
    if(index==n && parts==4){
        temp.pop_back();
        // parts count after. insertion but have to remove last . before insert temp in ans
        ans.push_back(temp);
        return;
    }
     
    if(index+1<=n)
    // this checks internally when totla n is less than 12 so proper 4 parts ip add make
    solve(s,index+1,n,temp+s.substr(index,1)+'.',parts+1,ans);
    // inclusive of this index take one ele 

     // choose to push . after 2 char from index and idx+2
     if(index+2<=n && isvalid(s.substr(index,2)))
     solve(s,index+2,n,temp+s.substr(index,2)+'.',parts+1,ans);

     // choose to push . after 3 char from index and idx+3
     if(index+3<=n && isvalid(s.substr(index,3)))
      solve(s,index+3,n,temp+s.substr(index,3)+'.',parts+1,ans);


}
int main(){
     //  leetcode 93 condition 1=> chioce is your 1 digit lo 2 lo ya teen lo par wo 0-255 k beech honi chaiy
        //condition 2=> 4 parts se jyada nahi hona chaiye means tottal 3 -3 len k 4 parts total 12 elements 
        // condition koi bhi part zero se start nahi hona chahiye
    cout<<"enter IP add to restore";
    string s;
    cin>>s;
    string temp;
    vector<string>ans;
    int parts=0;
    int n=s.size();
    if(n>12)return 0;
    solve(s,0,n,temp,parts,ans);
    for(auto x:ans){
        for(auto y:x){
            cout<<y;
        }
        cout<<"  ,  ";
    }
}