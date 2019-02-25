#include <bits/stdc++.h>
using namespace std;
int y = pow(10,9)+7;
int n;
long long x = 1;

int main() {
cin >> n;
int p[n];

for (int i = 1; i <= n; i++) {
    cin >> p[i];
    x = (p[i]*x)%y;
    }
cout << abs(x);


return 0;
}
