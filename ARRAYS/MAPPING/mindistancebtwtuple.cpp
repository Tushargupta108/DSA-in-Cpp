#include<bits/stdc++.h>
using namespace std;
int main(){
    //from given array find tuple  which has same elements present at diff index of array
    // distance is calculate as dis btw  1n2 ele + dis btw 2n3 + dis btw 1n3 ele
    vector<int>arr={1,2,1,1,3,2,3,2,3,4,3};
    int mindistance=INT_MAX;

    unordered_map<int,vector<int>>m;
    // used to store elemnets with their index location
    for(int i=0;i<arr.size();i++){
        m[arr[i]].push_back(i);
        // listing in map as 
        // 1-[0,2,3]
        // 2-[1,5,7]
        // 3-[4,6,8,10]
        // 4-[9]
    }
    for(auto it:m){
        vector<int>v=it.second;
        // used to store value of map
        if(v.size()>=3){
            // agar v ka size teen h y zyada then we can find tuples
            for(int i=0;i+2<v.size();i++){
                // helps to travels on pair of triplets if more than 3 ele then find min dis  from windows of 3 elements
                int distance=(v[i+1]-v[i])+(v[i+2]-v[i+1])+(v[i+2]-v[i]);
                // find distance according to condition 
                // also can use this formule 2*(v[i+2]-v[i])
                mindistance=min(mindistance,distance);
                // find min distance either from diff ele tuple or from same ele >3 
            }
        }
    }
    cout<<mindistance;
}