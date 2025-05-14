#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        double a;
        cin >> x >> y >> a;
        
        a += 0.5; // Adjusting the value of `a`
        
        if (fmod(a, x + y) < x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
