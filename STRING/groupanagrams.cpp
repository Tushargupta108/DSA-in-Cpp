#include<bits/stdc++.h>
using namespace std;
int main(){
    // problem-> given  array of strings we have to group same anagrams in a pair in a vector
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>>m;
    // storing final ans as vector of vector of string
   vector<vector<string>>ans;


// used for mapping same anagrmams in a vector
    for(auto x:strs){
        string temp=x;
        sort(x.begin(),x.end());
        m[x].push_back(temp);
        // sort karne k wadd x(eat-aet) naam wale vector me orginal string eat push kardo
    }
    for(auto x:m){
        // x pointing toward vector<strings> stored in a mapp and pushing vector aet naam wale key ki value in ans
        ans.push_back(x.second);
    }
    // printing the  vector of vector of string
    for (auto x : ans) {
       cout << "[ ";
      for (auto y : x) {
        cout << y << " ";
      }
      cout << "]" << endl;
    }

}