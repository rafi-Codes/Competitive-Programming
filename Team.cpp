#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d = 0;
    cin >> n;
    int w[n][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> w[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < 3; j++) {
           c += w[i][j];
        }
        cout << c << endl;
        if (c >= 2){
            d++;
        }
    }

    cout << d << endl;

    return 0;
}
