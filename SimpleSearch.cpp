#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x[105000], r;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cin >> n;
for (int i = 0; i < n; i++) {
    cin >> x[i];
}
cin >> r;
for (int i = 0; i < n; i++) {
    if (x[i] == r) {
        cout << i << "\n";
        break;
    }
}
return 0; 
}
