#include<bits/stdc++.h>
using namespace std;
int main(){
    //leetcode problem 28 given two string find 2nd string firsrt m sabse pahle kis idx par aayi h a=sadbutsad  b=sad 
   string a="sadbutsad";
   string b="sad";
   int index=-1;
   for(int i=0;i<a.size()-b.size();i++){
    // size m-n done bcs sbustrng will find rest characters from m-n point to m lenth
    if(a.substr(i,b.size())==b){
       index=i;
    }
   }
   cout<<" first indx from where string 2 occur in string 1 is:"<<index;
   
}