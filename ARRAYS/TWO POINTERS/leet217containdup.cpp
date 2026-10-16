#include<bits/stdc++.h>
using namespace std;
int main(){
    // problem find given array contains duplicate or not 
    vector<int>nums={1,2,3,4,2,1,5,6};
//    // approach 1 =>
//    int maxele=*max_element(nums.begin(),nums.end());
// //    it will point to max ele of nums
// vector<int>v(maxele+1,0);
// // {0,0,0,0,0,0,}
// for(int i=0;i<nums.size();i++){
//     // mapping these in vector
//     v[nums[i]]++;
//     //vector m nums k elements par jake freq increase _Rb_tree_key_compare
// }
// int repeatele;
// for(int i=0;i<v.size();i++){
//     if(v[i]>1){
//       cout<<"element repeat in array is "<<i;
//     }
// }

// approach 2 =>
unordered_set<int>s;
for(int i=0;i<nums.size();i++){
  if (s.find(nums[i]) != s.end()){
    // agar s m doonte doondte end tak nahi pahunch paye 
    cout<<"eleemnt repeat is "<<nums[i]<<endl;
   }
//    else
   s.insert(nums[i]);
}

}