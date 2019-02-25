#include<bits/stdc++.h>
using namespace std;
string str;

int main() {
    cin >> str;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 'a' - 'A';
        else if (str[i]>='a' && str[i]<='z')
            str[i] = str[i] + 'A' - 'a';

    }
    cout << str;
}
