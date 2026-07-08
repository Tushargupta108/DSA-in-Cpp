#include<bits/stdc++.h>
using namespace std;
void printsubsetsum(vector<int>&v,int index,int sum,int size){
    // base condition
    if(index==size){
        cout<<sum<<endl;
        return;
    }
    // if element include
    printsubsetsum(v,index+1,sum+v[index],size);
    // if ele,ent not included
    printsubsetsum(v,index+1,sum,size);
}
int main(){
    vector<int>v={3,4,5};
    // in this problem we will peint sum of each subsets of given proper set
    int index=0;
    int sum=0;
    int n=v.size();
    printsubsetsum(v,index,sum,n);
}                                     
//                                   (index,sum)
// //                                   (0,0)
//                                    /      \
//                          Include 3         Exclude 3
//                             /                   \
//                          (1,3)                 (1,0)
//                         /     \              /        \
//                  Include 4   Exclude4     Include4         Exclude4
//                     /              \       /                 \
//                  (2,7)           (2,3)   (2,4)               (2,0)
//                  /   \           /   \    /   \             /     \
//           Inc5 /     \ Exc5  Inc5   Exc5 Inc5 Exc5       Inc5    Exc5
//               /       \      /       \    /     \        /         \
//           (3,12)   (3,7) (3,8)   (3,3)(3,9)(3,4)(3,5)  (3,0)