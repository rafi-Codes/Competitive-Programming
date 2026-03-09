// https://codeforces.com/contest/2185/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = n;
        int max = INT_MIN;
        while (x--){
            int a;
            cin >> a;
            if (a > max){
                max = a;
            }
        }
        cout << max * n << endl;
    }
    return 0;
}
