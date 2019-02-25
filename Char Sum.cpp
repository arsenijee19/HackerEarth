#include <bits/stdc++.h>
using namespace std;
string x;
int y, z;
int main() {
cin >> x;
y = x.size();
for (int i = 0; i < y; i++) {
            z += x[i] - 96;
}

cout << z;
return 0;
}
