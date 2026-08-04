// divide array in four parts
// 0-l-1 contain series of 0 
// l-mid contain series of 1
// mid - high  contains array which is unsorted 
//  high - n-1 contains series of 2
// later this umsorted part willl shrink as array sorted

// approaches-> aagar 0 mile to 0 se l-1 wale me 0 is series badhao
// agar 1 mile to use unsorted part m hi rhne do means mid++ only mid 
// agar 2 mile to high and mid swap last me daal do 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,0,1,2,0,1,0,2,1,0,1,2,1,2,0};
    int low=0;
    int mid=0;
    // abahi sating me mid se high me hi unsorted part store hoga na
    int high=v.size()-1;

    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[high],v[mid]);
            high--;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
}
