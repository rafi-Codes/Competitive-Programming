#include <iostream>
#include <vector>
using namespace std;
int L = 1;

void Array(vector<long double>& X, int n) {
    for (int i = 0; i < n; i++) {
        cin >> X[i];
        if (X[i] < 1 || X[i] > 1000000000) {
            exit(0);
        }
    }
}

void check(vector<long double>& G, vector<long double>& B) {
    for (int i = 0; i < B.size(); i++) {
        if (G[i] != B[i]) {
            L = 0;
            break;
        }
    }

    if (L) cout << "YES";
    else cout << "NO";
}

int main() {
    int n, m;
    cin >> n >> m;

    if (m > n) {
        cout << "NO";
        return 0;
    }

    vector<long double> A(n);
    vector<long double> B(m);
    vector<long double> G;

    Array(A, n);
    Array(B, m);

    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (A[i] == B[j]) {
            G.push_back(A[i]);
            j++;
        }
    }

    if (G.size() != B.size()) {
        cout << "NO";
        return 0;
    }

    check(G, B);

    return 0;
}
