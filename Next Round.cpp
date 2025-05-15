#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, c=0;
    cin >> n >> k;
    vector <int> p(n);

    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    for (int i = 0; i < n; i++){
        if (p[i] >= p[k-1] && p[i] != 0){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
