#include <bits/stdc++.h>
/// a = w, b = h, c = ms
bool test1 (int x, int y, int z) {
if (x < z || y < z) {
return true;
}
return false;
}
bool test2 (int a, int b, int c) {
if (a >= c && a == b) {
    return true;
}
return false;
}
using namespace std;
int minimumSize, weight, height, TestCases;
int main() {
cin >> minimumSize >> TestCases;
while (TestCases--) {
cin >> weight >> height;
if (test1(weight, height, minimumSize)) {
    cout << "UPLOAD ANOTHER" << "\n";
} else if (test2(weight, height, minimumSize)) {
    cout << "ACCEPTED" << "\n";
} else {
    cout << "CROP IT" << "\n";
}






}
return 0;}
