#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == s[i+1]) c++;
        else continue;
    }
    cout << c << endl;
    return 0;
}
