#include <iostream>
using namespace std;
int n, f = 1;
int main() {
cin >> n;

for (int i = 1; i <= n; i++) {
    f *= i; }

    cout << f;



return 0;
}
