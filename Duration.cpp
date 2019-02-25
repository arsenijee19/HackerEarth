#include <bits/stdc++.h>
using namespace std;
int n, sm, em, sh, eh, s, e;
int main() {
cin >> n;
while (n) {
    cin >> sh >> sm >> eh >> em;

    s = sh * 60 + sm;
    e = eh * 60 + em;

    cout << (e-s)/60 << " " << (e-s)%60 << endl;


    n--;


}


}
