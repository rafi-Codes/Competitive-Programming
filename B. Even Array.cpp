// https://codeforces.com/problemset/problem/1367/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0;
        int even = 0;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
        
            if (i % 2 != a % 2) {
                if (i % 2 == 0) even++;
                else odd++;
            }
        }
 
    
        if (even == odd) {
            cout << even << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
