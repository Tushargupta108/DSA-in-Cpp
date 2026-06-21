
#include <bits/stdc++.h>
using namespace std;

int main() {

   // problem is that given two strings and 1 char is diff find it
  // a=abcd
 // b=abced e is exta
    string a = "abcd";
    string b = "bcdea";

    unordered_map<char, int> m;

    for (int i = 0; i < a.size(); i++) {
        m[a[i]]++;
    }

    char ans = '0';

    for (auto x : b) {
        if (m.find(x) == m.end()) {
            ans = x;
            break;
        }
    }

    cout << "diffrent character is:"<< ans << endl;

    return 0;
}