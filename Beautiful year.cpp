#include <bits/stdc++.h>
using namespace std;
 
bool tracker(int year) {
    string s = to_string(year);
    unordered_set<char> digits;
    
    for (char c : s) {
        if (digits.count(c)) return false; 
        digits.insert(c);
    }
    return true;
}
 
int main() {
    int y;
    cin >> y;
 
    while (true) {
        y++; 
        if (tracker(y)) {
            cout << y << endl;
            break;
        }
    }
 
    return 0;
}
