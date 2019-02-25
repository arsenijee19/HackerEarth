#include <iostream>
using namespace std;
string s;
int main() {
cin >> s;
if (s == string(s.rbegin(), s.rend())) {
    cout << "YES";
}
else {
    cout << "NO";
}



return 0;
}
