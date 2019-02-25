#include <bits/stdc++.h>
using namespace std;
int n,i;;
int main () {
    cin >>n;
    i=0;
    while (n>0){
        i++;
        if (n-i<1){
            cout <<"Patlu"<<endl;
            break;
            }
            else {
                n=n-i;
            }

       if (n-i*2<1){
            cout <<"Motu"<<endl;
        break;
        }
        else
            n=n-2*i;

    }
return 0;
}
