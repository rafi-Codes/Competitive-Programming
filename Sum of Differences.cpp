/// https://atcoder.jp/contests/abc437/tasks/abc437_d?lang=en
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    const long long mod = 998244353;

    vector <long long> A(n);
    vector <long long> B(m);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        A[i] %= mod;
    }
    for (int j = 0; j < m; j++) {
        cin >> B[j];
        B[j] %= mod;
    }
    sort(B.begin(), B.end());
    vector <long long> PrefixB(m+1);
    for(size_t i = 0; i < B.size(); i++){
        PrefixB[i+1] = PrefixB[i] + B[i];
    }
    long long result = 0;
    for (long long a : A){
        int pos = upper_bound(B.begin(), B.end(),a) - B.begin();
        long long leftSum = ((a * pos - PrefixB[pos]) % mod + mod) % mod;
        long long rightSum = ((PrefixB[m] - PrefixB[pos] - a * (m - pos)) % mod + mod) % mod;
        result += ((leftSum % mod) + (rightSum % mod));
        result %= mod;
    }
    cout << result % mod << endl;
    return 0;
}
