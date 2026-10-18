// IMPORTANT :leetcode 844
#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {

    int i = s.size() - 1;
    int j = t.size() - 1;

    while (i >= 0 || j >= 0) {
        // this outer loop is execute to check every char from both string  not a single last char

        // Find next valid character in s
        int skipS = 0;
        while (i >= 0) {

            if (s[i] == '#') {
                skipS++;
                i--;
            }
            else if (skipS > 0) {
                skipS--;
                i--;
            }
            else {
                break;
            }
        }

        // Find next valid character in t
        int skipT = 0;
        while (j >= 0) {

            if (t[j] == '#') {
                skipT++;
                j--;
            }
            else if (skipT > 0) {
                skipT--;
                j--;
            }
            else {
                break;
               // every timee it checks valid elemet from end  in both string if not same then retrun false immediately
            }
        }

        // Compare current valid characters
        char chS = (i >= 0) ? s[i] : '$';
        char chT = (j >= 0) ? t[j] : '$';

        if (chS != chT)
            return false;

        // Move to previous character
        i--;
        j--;
    }

    return true;
    
}

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
   if (backspaceCompare(s, t))
        cout << "True";
    else
        cout << "False";
}
