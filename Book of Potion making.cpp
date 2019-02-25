#include <bits/stdc++.h>
using namespace std;
int x[100], br = 0, sum;
long long y;
int main() {
cin >> y;
while (y != 0) {
    y /= 10;
    br++;
}
if (br != 10) {
    cout << "Illegal ISBN" << endl;
}

for (int i = 1;i <= br; i++) {

    x[i] = y;
if (br == 10) {
sum = x[1]*1 + x[2]*2 + x[3]*3 + x[4]*4 +x[5]*5 + x[6] * 6 + x[7]*7 + x[8] * 8 + x[9] * 9 + x[10] * 10;
if (sum % 11 == 0) {
    cout << "Legal ISBN" << endl;
return 0;
}
else if (sum % 11 != 0)
    cout << "Illegal ISBN" << endl;
}
}



return 0;
}
