#include <iostream>
#include <string>
using namespace std;

void solve() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 2 && s[0] < s[1]) {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s[0] << " " << s[1] << endl;
        } else if (n > 2) {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s[0] << " " << s.substr(1) << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
