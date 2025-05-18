#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int uC = 0, lC = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (islower(s[i])) lC++;
        else if (isupper(s[i])) uC++;
    }

    if (uC < lC){
        for (int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    else if (lC < uC){
        for (int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }
    else if (lC == uC){
        for (int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
