#include <bits/stdc++.h>
using namespace std;
int l,r,k;
int br = 0;
int main() {
    cin >> l >> r >> k;
    for (int i = l; i <=r; i++) {
        if (i%k == 0)
            br++;
    }
    cout << br;
    return 0;
}
