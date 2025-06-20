#include <bits/stdc++.h>
using namespace std;

vector <bool> generatePrimes(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> is_prime = generatePrimes(n);

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int Count = 0;
    for (int i = 0; i + 1 < primes.size(); i++) {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && is_prime[sum]) {
            Count++;
        }
    }

    if (Count >= k) {
        cout << "YES" << endl;
    } 
    
    else {
        cout << "NO" << endl;
    }

    return 0;
}
