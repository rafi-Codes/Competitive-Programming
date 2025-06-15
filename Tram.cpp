#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b, c = 0, min = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        c -= a;
        c += b;
        min = max(min, c);
    }
 
    cout << min << endl;
    return 0;
}
