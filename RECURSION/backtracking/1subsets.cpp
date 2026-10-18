#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int>&v,int index,int size,vector<int>temp,vector<vector<int>>&ans){

//   when index pint to last element then push temp vector into 2d vector
if(index==size){
    ans.push_back(temp);
    return;
}
     
    // no/ element at that index not include
    subsets(v,index+1,size,temp,ans);
    // elemert at that index included
    temp.push_back(v[index]);
    subsets(v,index+1,size,temp,ans);



}

int main(){
    // space complexity = no of nodes generated in recursive tree i.e->  2^n+1 -1
    // make two choices at every level of tree either choose and insert index ele in array or not 
    //if not choosesn and inserted simply increase index+1 and if choosen insert it and index+1
    // base condition=> jab index given array ke size tak pahunch jaye tab us temp arr ko 2d ans vec m insert kar do
    vector<int>v={1,2,3};
    // no of subsets are 2^n  {} 1 2 3 12 13 23
    vector<int>temp;
    vector<vector<int>>ans;
    subsets(v,0,3,temp,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


// //                    v=123,idx=0,size=3,temp={},ans
//                              index = 0 (1)
//                           /                    \
//                     Don't 1                  Take 1
//                      {}                      {1}
//                 index=1                    index=1
//                /      \                   /         \
//           Don't 2    Take 2            Don't 2       Take 2
//             {}        {2}            {1}              {1,2}
//          index=2   index=2        index=2           index=2
//          /    \      /   \         /   \           /         \
//       D3      T3   D3    T3      D3    T3        D3           T3
//       {}      {3} {2} {2,3}     {1} {1,3}     {1,2}             {1,2,3}