//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>
using namespace std;

int main() {
            int n, l = 0;
            cin >> n;
            if (1 <= n && n <= 1000) {

                vector<long long int> A(n);
                vector<long long int> B(n);

                for (int i = 0; i < n; ++i) {
                    cin >> A[i];
                }

                for (int i = 0; i < n; ++i) {
                    cin >> B[i];
                }

                sort(A.begin(), A.end())
                sort(B.begin(), B.end())

                for (int i = 0; i < n; i++){
                    if (A[i] == B[i]){
                        l = 1;
                    }
                    else {
                        l = 0;
                        break;
                    }
                }

           if (l) cout << "yes";
           else cout << "no";
        }
        return 0;
}
`
