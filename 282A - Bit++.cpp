#include <bits/stdc++.h>
using namespace std;

int solve() {
    typedef long long int ll;

    int n;
    cin >> n;
    ll a = 0;

    while (n--) {
        string op;
        cin >> op;

        if (op.find("++") != -1) {
            a++;
        } else if (op.find("--") != -1) {
            a--;
        }
    }

    return a;
}

int main() {
    typedef long long int ll;
    ll X = 0;
    X = solve();
    cout << X << endl;
    return 0;
}
