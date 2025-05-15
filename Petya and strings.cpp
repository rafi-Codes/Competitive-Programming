#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++){
        if (isupper(a[i])){
            a[i] = tolower(a[i]);
        }
    }

    for (int i = 0; i < b.size(); i++){
        if (isupper(b[i])){
           b[i] = tolower(b[i]);
        }
    }

    if (a < b) cout << -1 << endl;
    else if (a > b) cout << 1 << endl;
    else if (a == b) cout << 0 << endl;

    return 0;
}
