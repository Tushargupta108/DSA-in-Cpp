#include<bits/stdc++.h>
using namespace std;

 int winner(int n,int k){
    // base case
    // "I cannot calculate my answer until winner(n-1) tells me its answer."
    if(n==1){
        // we all know we only participant left its the winner its 0 index person
        return 0;
    }
    return (winner(n-1,k)+k)%n;
//     winner(5)
//    │
//    ▼
// "I don't know.
// Let me ask winner(4)."

// winner(4)
//    │
//    ▼
// "I don't know.
// Let me ask winner(3)."

// winner(3)
//    │
//    ▼
// "I don't know.
// Let me ask winner(2)."

// winner(2)
//    │
//    ▼
// "I don't know.
// Let me ask winner(1)."

// winner(1)
//    │
//    ▼
// "I know!
// Winner is 0."

// winner(1) = 0  =>  winner(2) = (0+2)%2 = 0  =>  winner(3) = (0+2)%3 = 2 =>   winner(4) = (2+2)%4 = 0  =>  winner(5) = (0+2)%5 = 2  =>  Answer = 2+1 = 3
 }
int main(){
    cout<<"Numbers of Participants Required"<<endl;
    int n;
    cin>>n;
    cout<<"frequency/position after a participant remove"<<endl;
    int k;
    cin>>k;
    cout<<"winner is  person "<<winner(n,k)+1;
}