#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, temp;
    cin >> N >> Q;

    map<int, bool> v;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        v[temp] = true;
    }

    while (Q--) {
        int x;
        cin >> x;
        if (v[x]) {
            cout << "Found" << endl;
        } else {
            cout << "Not Found" << endl;
        }
    }

    return 0;
}
