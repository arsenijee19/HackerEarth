#include <bits/stdc++.h>
using namespace std;
int n, limit;
int main() {
cin >> n >> limit;
int p[n];
for (int i = 1; i <= n; i++) {
    cin >> p[i];
}

for (int i = 1; i <= n; i++) {

    if (p[i] < limit) {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;


}
return 0;
}
