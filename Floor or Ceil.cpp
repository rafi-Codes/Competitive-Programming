#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int x, m, n;
        cin >> x >> n >> m;

        if (n == 0 && m == 0) {
            cout << x << " " << x << endl;
        } 
        else if (x == 0) {
            cout << "0 0" << endl;
        } 
        else {
            if (n > 60) n = 60; 
            if (m > 60) m = 60;

            long long int F = pow(2, n);
            long long int C = pow(2, m); 

            long long int minF = x / F;
            minF = (minF + (C - 1)) / C;

            long long int maxC = (x + (C - 1)) / C;
            maxC = maxC / F;
            cout << min(minF, maxC) << " " << max(minF, maxC) << endl;
        }
    }

    return 0;
}
