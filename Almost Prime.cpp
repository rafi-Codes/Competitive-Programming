#include <bits/stdc++.h>
using namespace std;

int almostPrime(int n) {
    vector <bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }

    vector <vector<int>> X(n + 1);
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            X[j].push_back(i);
        }
    }

    int fCount = 0;
    for (int i = 2; i <= n; i++) {
        int tempCount = 0;
        for (int p : X[i]) {
            if (primes[p]) {
                tempCount++;
            }
        }
        if (tempCount == 2) {
            fCount++;
        }
    }

    return fCount;
}

int main() {
    int n;
    cin >> n;
    cout << almostPrime(n);
    return 0;
}
