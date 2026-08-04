// IMPORTANT :leetcode 844
#include<bits/stdc++.h>
using namespace std;
// approach 1=>

// string check(string a){
//     int i=0;
//     string temp="";
//     while(i<a.size()){
//         if(a[i]!='#'){
//            temp.push_back(a[i]);
//         }
//         else if(!temp.empty()){
//             // agar temp khali karte karte 0 na ho gya ho
//             temp.pop_back();
//         }
//         i++;
//     }
//     return temp;
// }
int main(){
    // remove character from string which is just immmediate before # in string 
    // approach 1
    string s="ab#c#d";
    string t="addb#";
    // s= check(s);
    // t=check(t);
    // if(s==t){
    //     cout<<"True";
    // }
    // else{
    //     cout<<"False";
    // }
     int i=s.size()-1;
     int j=t.size()-1;
      int  skip_i=0;
       int  skip_j=0;
     while(i>=0){
       
        if(s[i]=='#'){
            skip_i++;
            i--;
        }
        else if(skip_i>0){
            skip_i--;
            i--;
        }
        else{
            break;
        }
     }    
    //  similarly check for string t
    while(j>=0){
       
        if(t[j]=='#'){
            skip_j++;
            j--;
        }
        else if(skip_j>0){
            skip_j--;
            j--;
        }
        else{
            break;
            // every timee it checks valid elemet from end  in both string if not same then retrun false immediately
        }
     } 
     char first_s=i<0?'$':s[i];
     char first_t=j<0?'$':t[j];
      if(first_s==first_t){
         cout<<"True";
      }
      else{
        cout<<"False";
      }
}
