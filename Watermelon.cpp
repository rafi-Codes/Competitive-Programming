#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    int w,n;
    cin >> w;
    n = w - 2;
    if (n % 2 == 0 && n != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
