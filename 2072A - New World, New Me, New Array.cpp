#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;


        int max_sumPossible = n * p;
        int min_sumPossible = n * -p;


        if (k > max_sumPossible || k < min_sumPossible) {
            cout << "-1" << endl;
            continue;
        }


        int opNeed = 0;
        if (k != 0) {
            opNeed = abs(k) / p;
            if (abs(k) % p != 0) {
                opNeed++;
            }
        }

        cout << opNeed << endl;
    }

    return 0;
}
