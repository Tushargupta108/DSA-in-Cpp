#include<bits/stdc++.h>
using namespace std;
double solve(double x, long n) {
    // 1. BASE CASE: Anything to the power 0 is 1
    if (n == 0) {
        return 1;
    }

    // 2. NEGATIVE POWER: Flip x to (1/x) and make n positive
    if (n < 0) {
        return solve(1 / x, -n);  // e.g., 2^(-2) becomes (1/2)^2
    }

    // 3. EVEN POWER: Square the base, divide power by 2
    if (n % 2 == 0) {
        return solve(x * x, n / 2); // e.g., 2^10 becomes (4)^5
    }

    // 4. ODD POWER: Pull one 'x' out to make the power even
    else {
        return x * solve(x * x, n / 2); // e.g., 2^5 becomes 2 * (4)^2
    }
}
int main(){
    // given number and its another number raised to the power to it 
     double x=2.0000;
     long n=-5;
     cout<<" RESULT OF X^ N IS "<<solve(x,n);
}
