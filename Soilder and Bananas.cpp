#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,w,x;
    cin >> k >> n >> w;
    x = 0.5*(k*w)*(1+w);
    if (x > n) cout << x - n << endl;
    else cout << 0 << endl;
    return 0;
}
