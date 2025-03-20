#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    
        int t;
        cin >> t;

        while (t--) {
            int n;
            string S, T;
            cin >> n >> S >> T;

            if (S == T) {
                cout << 0 << endl;
                continue;
            }

            int mismatchNormal = 0;
            int mismatchReversed = 0;

            string reversedT = T;
            reverse(reversedT.begin(), reversedT.end());

            if (S == reversedT) {
                cout << 2 << endl;
                continue;
            }

            for (int i = 0; i < n; i++) {
                if (S[i] != T[i]) mismatchNormal++;
                if (S[i] != reversedT[i]) mismatchReversed++;
            }


    int durationNormal;
    if (mismatchNormal % 2 == 0) {
        durationNormal = 2 * mismatchNormal;
    } else {
        durationNormal = 2 * mismatchNormal - 1;
    }

    int durationReversed;
    if (mismatchReversed % 2 == 1) {
        durationReversed = 2 * mismatchReversed;
    }

    else {
        durationReversed = 2 * mismatchReversed - 1;
    }

    cout <<min(durationNormal, durationReversed) << endl;
  }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
