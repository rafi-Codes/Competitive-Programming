#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int op1 = 0;
    int op2 = 0;

    for (int i = 0; i < n; i++){

        if (i % 2 == 0) {

            if (a[i] < 0) op1++;

            if (a[i] > 0) op2++;
        }

        else {

            if (a[i] > 0) op1++;

            if (a[i] < 0) op2++;
        }
    }

    cout << min(op1, op2) << endl;
}

int main() {
    solve();
    return 0;
}
