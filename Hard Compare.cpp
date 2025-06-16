#include <bits/stdc++.h>
using namespace std;

int main (){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long double x = (b * log10(a)) - (d * log10(c));
    if (x == 0 || x < 0 ) cout << "NO";
    else cout << "YES";
    return 0;
}