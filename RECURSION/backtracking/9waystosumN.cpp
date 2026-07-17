#include<bits/stdc++.h>
using namespace std;
int countwaystosumN(vector<int>&arr,int target){
    if(target<0){
        return 0;
    }
    if(target==0){
        return 1;
    }
    
    // backtracking when target found or bcm negative
    int ans=0;
    // helps to add 1 and 0 comes from the brancjes of node in perfectsum ele no repeat then where take and skip work 
   for(int i=0;i<arr.size();i++){
    // this loop is used to travese on elements all that particular node from the defined index
     ans+= countwaystosumN(arr,target-arr[i]);
   }
   return ans;
}
int main(){
    // same problem as perfect sum but here elements can repeate themself ex 7 =1+1+1+1+1+1+1
    int N;
    cin>>N;
    vector<int>arr={1,5,6};
    
    cout<<"totoalno of ways to sum N  "<<countwaystosumN(arr,N);
//                                         count(7)
//                               /         |         \
//                             1/         5|         6\
//                             /           |           \
//                      count(6)      count(2)      count(1)
//                   /    |    \       /   |   \      /  |  \
//                 1/    5|    6\    1/   5|   6\   1/ 5| 6\
//               /        |       \   /     |     \  /   |   \
//          count(5)  count(1) count(0) count(1) -3   -4 count(0) -4 -5
//          / |  \        |        ✅      |               ✅
//        1/ 5| 6\      1|        (1+6)   1|
//       /    |    \      |               |
//  count(4) count(0) -1 count(0)       count(0)
//    /|\      ✅          ✅              ✅
//   / | \
// 1/ 5| 6\
// /   |   \
// count(3) -1 -2
//  / | \
// 1/ 5| 6\
// /   |   \
// count(2) -2 -3
//  / | \
// 1/ 5| 6\
// /   |   \
// count(1) -3 -4
//  / | \
// 1/ 5| 6\
// /   |   \
// count(0) -4 -5
//    ✅
    
}