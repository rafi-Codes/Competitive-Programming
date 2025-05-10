#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
 
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
 
        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
 
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                flag = false;
                break;
            }
        }
 
        if (flag) {
            cout << "NO" << endl;
            continue;
        }
 
        string r = s;
        reverse(r.begin(), r.end());
 
        if (s == r) {
            if (k > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
 
        
        bool Flag = false;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) {
                if (s[i] < s[n - 1 - i]) {
                    Flag = true;
                }
                break;
            }
        }
 
        if (Flag || k >= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
