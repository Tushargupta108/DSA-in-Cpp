#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,3,8,5,7,9,6,4};
    unordered_map<int,int>m;
    int required=0;
    int target=15;
    vector<pair<int, int>> ans;


    for(int i=0;i<8;i++){
       required=target-arr[i];
       if(m.find(required)!=m.end()){
          ans.push_back({required, arr[i]});
       }
       m[arr[i]]++;
    }
    for (auto p : ans) {
         cout << p.first << " , " << p.second << endl;
    }
}    

