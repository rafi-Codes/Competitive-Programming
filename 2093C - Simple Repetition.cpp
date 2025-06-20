#include <bits/stdc++.h>
using namespace std;
 
#define MAX 1e7
vector<bool> Prime(MAX, true);
vector<int> primes;
 
void sieve() {
    Prime[0] = Prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (Prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                Prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX; ++i) {
        if (Prime[i]) {
        primes.push_back(i);
        }
    }
}
 
int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;
 
        string y_str;
        for (int i = 0; i < k; i++) {
            y_str += x;
        }
 
        if (y_str.length() > 18) {
            cout << "NO" << endl;
            continue;
        }
 
        long long y = stoll(y_str);
 
        if (y < MAX) {
            if (Prime[y]) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
 
        else {
            bool prime = true;
            for (long long p : primes) {
                if (p * p > y) break;
                if (y % p == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
