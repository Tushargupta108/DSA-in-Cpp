#include <bits/stdc++.h>
using namespace std;
// problem=> large integer. Add 1 to the integer and return the resulting array.
// [1,2,3]  → [1,2,4]
// [4,3,2,1] → [4,3,2,2]
// [9,9,9] → [1,0,0,0]
int main() {
vector<int>v={9,9,9};
vector<int>ans;
bool allnine=true;

for(int i=v.size()-1;i>=0;i--){
    // agar last wala ele 9 h to use 0 bana do 
    if(v[i]==9){
        v[i]=0;
       
    }
    // agar nahi h to usme ekadd karo and terminate function two stop  increasing  further digits
    else{
         v[i]++;
         allnine=false;
         break;
     }
     
    
}
// when all digits are no upar wale function se wo sare digits 0 ban jayege then caary k 1 add in begin of ans
if(allnine){
 v.insert(v.begin(),1);
} 
for(auto x:v){
    cout<<x<<" ";
}


}
