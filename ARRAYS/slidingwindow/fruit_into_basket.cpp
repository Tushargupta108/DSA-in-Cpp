// You are given an array where each number represents a fruit type on a tree.

// You have 2 baskets:

// Each basket can hold only one type of fruit.

// Each basket can hold unlimited fruits of that type.

// Start from any tree and move only to the right, picking one fruit from every tree.

// If you reach a tree whose fruit type doesn't fit into your two baskets, you must stop.

// Return the maximum number of fruits you can collect.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>trees={1,2,3,2,2,3,2,5,4,5,4,5,5,5,4,4};
    // value of tree represent what types of fruit it is
    // each iindex represent amount of food 
    // we have to return max number of tree from we can selcet fruits 
    // i.e  we have two baskets means only from two types of trees we can pick so need max subarray only twwo types of trees contains
    int basketsize=2;
    unordered_map<int,int>m;
    int start=0;
    int end=0;
    int maxlen=0;
    while(end<trees.size()){
        m[trees[end]]++;
        while(m.size()>basketsize){
           m[trees[start]]--;
        //    now remove left side tree
           if(m[trees[start]]==0){
            m.erase(trees[start]);
           }
           start++;
        }
        maxlen=max(maxlen,end-start+1);
        end++;
    }
    cout<<maxlen;
}
