#include <bits/stdc++.h>
using namespace std;

int main() {
    map <char,int> x;
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        x[s[i]]++;
    }

    if (x['A'] > x['D']) cout << "Anton" << endl;
    else if (x['A'] < x['D']) cout << "Danik" << endl;
    else if (x['A'] == x['D']) cout << "Friendship" << endl;

    return 0;
}
