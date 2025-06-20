#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool f = false;

        for (int k = 0; k < n; k++) {
            int g1 = a[k];
            int g2 = 0;
            vector<int> ans(n);
            ans[k] = 1;

            for (int j = 0; j < n; j++) {
                if (j != k) {
                    g2 = gcd(g2, a[j]);
                    ans[j] = 2;
                }
            }

            if (g1 != g2) {
                cout << "YES" << endl;
                for (int j = 0; j < n; j++) {
                    cout << ans[j] << " ";
                }
                cout << endl;
                f = true;
                break;
            }
        }

        if (!f) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
