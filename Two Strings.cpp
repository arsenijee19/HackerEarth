#include <bits/stdc++.h>
using namespace std;
int T;
string s1, s2;


int main() {
cin >> T;
while (T--) {
 cin >> s1 >> s2;

sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
if (s1 == s2) {
    cout << "YES" << endl; }
    else {
        cout << "NO" << endl;
}}

return 0;
}
