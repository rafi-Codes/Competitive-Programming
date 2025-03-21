#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n%2==0)
        {
            cout << (n + k - 2) / (k - 1) << endl;
        }

        else
        {
            n = n - 1;
            cout << (n + k - 2) / (k - 1) << endl;
        }

    }
}

int main() {
    solve();
    return 0;
}
