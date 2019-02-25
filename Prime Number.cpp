#include <iostream>
using namespace std;
bool decide;
int n, br;
int main() {
cin >> n;

for (int i = 2; i <= n; i++) {
    for (int j = 2; j*j <= i; j++) {

        if (i % j == 0) {
            decide = false;
        }
    }
   if(decide) {
    cout << i << " "; }

}

return 0;
}
