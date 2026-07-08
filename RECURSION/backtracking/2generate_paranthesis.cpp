#include<bits/stdc++.h>
using namespace std;

void generate(int n , int opening ,int closing ,string &temp ,   vector<string>&ans){
      if(opening+closing==2*n){
         ans.push_back(temp);
         return;
      }
      
     if(opening<n){
        //jab tak n k equal h tab tak add kr sakte ho
       temp.push_back('(');
        generate(n,opening+1,closing,temp,ans);
        temp.pop_back();

     }

     if(closing<opening){
        // bcz har opening k closing hoga isliye agar equal ya jyada h opening tabhi closing add hosakta h
        temp.push_back(')');
        generate(n,opening,closing+1,temp,ans);
        temp.pop_back();
        // this pop back helps to reduce space complexity as no extra temp is created it pass by refrence
     }
}


int main(){
    // Every opening bracket ( must have a matching closing bracket )
    // at every step we have to add ( or ) but theres a condition to balace equal no of opening and closing brackets
    // We cannot use more than n opening brackets.bc to complete equal opning and close we need equal no of these both brackets

    // We can add a closing bracket only if an opening bracket is available  means opening brackets must be>= closing bracket dono mila kar 2*n hone chahiye

    int n;
    cin>>n;
    int opening=0;
    int closing=0;
    string temp;
    vector<string>ans;
    generate(n,opening,closing,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}

// // "" (0,0)
// │
// └── "(" (1,0)
//     │
//     ├── "((" (2,0)
//     │   │
//     │   ├── "(((" (3,0)
//     │   │   │
//     │   │   └── "((()" (3,1)
//     │   │       │
//     │   │       └── "((())" (3,2)
//     │   │           │
//     │   │           └── "((()))" (3,3)   ✔
//     │   │
//     │   └── "(()" (2,1)
//     │       │
//     │       ├── "(()(" (3,1)
//     │       │   │
//     │       │   └── "(()()" (3,2)
//     │       │       │
//     │       │       └── "(()())" (3,3)   ✔
//     │       │
//     │       └── "(())" (2,2)
//     │           │
//     │           └── "(())(" (3,2)
//     │               │
//     │               └── "(())()" (3,3)   ✔
//     │
//     └── "()" (1,1)
//         │
//         └── "()(" (2,1)
//             │
//             ├── "()((" (3,1)
//             │   │
//             │   └── "()(()" (3,2)
//             │       │
//             │       └── "()(())" (3,3)   ✔
//             │
//             └── "()()" (2,2)
//                 │
//                 └── "()()(" (3,2)
//                     │
//                     └── "()()()" (3,3)   ✔