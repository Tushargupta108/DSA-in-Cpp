#include<bits/stdc++.h>
using namespace std;
void findingstrings(int n,vector<string>&ans,int zero,int one,string &temp){
   if(zero+one==n){
    // when  subset string size bcm equal to given string size
    ans.push_back(temp);
    return;
   }

   //inserting ones
   temp.push_back('1');
   findingstrings(n,ans,zero,one+1,temp);
   temp.pop_back();   

   //inserting zero if less than one 
   if(zero<one){
   temp.push_back('0');
   findingstrings(n,ans,zero+1,one,temp);
   temp.pop_back();    
   }
}
int main(){
    // problem => Print N-bit binary numbers having more 1s than 0s  
    // taking those binary number in which no of 1s are more than 0s
    // we have two approch generate all string of lenth strings as subset then push them in ans after counting 1s 
    // second is choose only 0 if less than 1

    cout<<"enter  length of string from which no of 1 more than 0s genrate ";
    int n;
    cin>>n;
    string temp;
    // stores  strings
    vector<string>ans;
    int zero=0;
    int one=0;
    findingstrings(n,ans,zero,one,temp);
    for(auto s:ans){
        cout<<s<<endl;
    }
    //                 Current Node
//                      │
//          ┌───────────┴───────────┐
//          │                       │
//    Choose '1'              (after backtracking)
//          │                       │
//  Explore ALL paths          Choose '0'
//          │                       │
//       Return               Explore ALL paths
//          │                       │
//      pop_back()             pop_back()
//          └───────────Return───────────┘

    
} 