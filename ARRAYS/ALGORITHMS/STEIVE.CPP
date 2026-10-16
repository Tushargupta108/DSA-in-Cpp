// STEIVE ALGORITHM IS USED IN THE CASE OF PRIME NUMBERS GENRALLY WHEN FIND COUNT OF PRIME NUMBERS
// STEIVE MEANS CHALNI 
#include<bits/stdc++.h>
using namespace std;
int find_count(int n){
    int count=0;
    vector<bool>isprime(n+1,true);
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++;
        }
        for(int j=i*2;j<n;j=j+i){
            isprime[j]=false;
        }
    }
    return count;
}
int main(){
    int n=50;
    
    cout<<find_count(n);
}