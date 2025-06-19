#include <bits/stdc++.h>
using namespace std;

vector<int> Primes() {
    int n = 1e8;
    vector<bool> ans(n, true);
    ans[0] = ans[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (ans[i]) {
            for (int j = i * i; j < n; j += i) {
                ans[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i < n; i++) {
        if (ans[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    auto pF = Primes();
    for (int i = 1; i < pF.size(); i += 100) {
        cout << pF[i-1] << endl;
    }
    return 0;
}
