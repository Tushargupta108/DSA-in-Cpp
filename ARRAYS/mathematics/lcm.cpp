#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==b) return b;
    return a;
}
int main(){
    int a=20;
    int b=60;
    // find lcm is mathematically =
    // a*b=lacm(a,b)*gcd(a,b);
    cout<<"lcm of a and b is : "<<(a*b)/gcd(a,b);
};