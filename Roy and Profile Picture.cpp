#include <bits/stdc++.h>
using namespace std;
int l, w, h, n;
int main() {
cin >> l >> n;
int w[n], h[n];
for (int i = 1; i <= n; i++) {
    cin >> w[i] >> h[i];
}

for (int i = 1; i <= n; i++) {
   if ((w[i] == h[i]) && (w[i] >= l)) {
    cout << "ACCEPTED" << endl;
   }

   else if ((w[i] < l) || (l > h[i])) {
    cout << "UPLOAD ANOTHER" << endl;
   }
   else if (w[i] != h[i]) {
    cout << "CROP IT" << endl;
   }


}
return 0;
}
