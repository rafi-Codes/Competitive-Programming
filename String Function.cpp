#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s;

    cin >> n >> q >> s;
    cin.ignore();

    while (q--) {
        string Q;
        getline(cin, Q);

        if (Q == "pop_back") {
            s.pop_back();
        } 
        else if (Q == "front") {
            cout << s.front() << endl;
        } 
        else if (Q == "back") {
            cout << s.back() << endl;
        } 
        else if (Q.rfind("sort ") == 0) {
            int l, r;
            sscanf(Q.c_str(), "sort %d %d", &l, &r);
            if (l > r) swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        } 
        else if (Q.rfind("reverse ") == 0) {
            int l, r;
            sscanf(Q.c_str(), "reverse %d %d", &l, &r);
            if (l > r) swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        } 
        else if (Q.rfind("substr ") == 0) {
            int l, r;
            sscanf(Q.c_str(), "substr %d %d", &l, &r);
            if (l > r) swap(l, r);
            cout << s.substr(l - 1, r - l + 1) << '\n';
        } 
        else if (Q.rfind("print ") == 0) {
            int pos;
            sscanf(Q.c_str(), "print %d", &pos);
            cout << s[pos - 1] << endl;
        } 
        else if (Q.rfind("push_back ") == 0) {
            char x;
            sscanf(Q.c_str(), "push_back %c", &x);
            s.push_back(x);
        }
    }

    return 0;
}
