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
        map<int, int> index;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            index[a[i]] = i + 1;
        }

        int Sum = -1;
        for (auto &[v1,i1] : index) {
            for (auto &[v2,i2] : index) {
                if (gcd(v1,v2) == 1) {
                    Sum = max(Sum, i1 + i2);
                }
            }
        }

        cout << Sum << endl;

    }
    return 0;
}
