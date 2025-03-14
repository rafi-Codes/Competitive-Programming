#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    char c;
    map <char,int> m;

    for (int i = 0; i < x; i++) {
        cin >> c;
        m[c]++;
    }

    for (auto& x : m) {
        while (x.second > 0) {
            cout << x.first;
            x.second--;
        }
    }

    return 0;
}
