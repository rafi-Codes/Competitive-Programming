#include <bits/stdc++.h>
using namespace std;

int main() {
    int c = 0;
    string s;
    cin >> s;
    map <char,int> x;

    for(char c : s){
        x[c]++;
    }

    for (auto& m : x){
        c++;
    }

    if (c % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
