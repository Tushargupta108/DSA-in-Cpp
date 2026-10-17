#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long>num1={0,1,5,7,2,9,0,0,0,0,0,0};
    vector<long long>num2={6,5,4,3,2,1};
    int start=0;
    int end=0;
    sort(num1.begin(),num1.end());
    // 0 0 0 0 0 0 0 1 2 5 7 9 
    sort(num2.begin(),num2.end());
    // 1 2 3 4 5 6
    
    // moving zeros to end of num1
    while(end<num1.size()){
        if(num1[end]!=0){
            swap(num1[start],num1[end]);
            start++;
            
        }
        end++;
    }
    start=0;
    end=0;
  vector<int>res;
    // 
    while(start < num1.size() && end < num2.size()){

    if(num1[start] <= num2[end]){
        res.push_back(num1[start]);
        start++;
    }
    else{
        res.push_back(num2[end]);
        end++;
    }
  }

while(start < num1.size()){
    res.push_back(num1[start]);
    start++;
}

while(end < num2.size()){
    res.push_back(num2[end]);
    end++;
}
    for(auto x:res){
        if(x==0)continue;
        cout<<x<<" ";
    }

}