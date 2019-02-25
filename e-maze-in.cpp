#include <bits/stdc++.h>
using namespace std;
int x = 0, y = 0;
int a, b, c, d, xu, yu;
string p;
int main() {
cin >> p;

a = count(p.begin(), p.end(), 'L');
b = count(p.begin(), p.end(), 'R');
c = count(p.begin(), p.end(), 'U');
d = count(p.begin(), p.end(), 'D');

xu = b-a;
yu = c-d;

cout << xu << " " << yu << endl;

}
