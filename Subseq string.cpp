#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,p;
    map <char, int> m;
    map <char, int> m1;
    string c = "hello";
    cin >> s;

    int j = 0;
    for (int i = 0; i < s.size() && j < c.size(); i++) {
        if (s[i] == c[j]) {
            p.push_back(s[i]);
            j++;
        }
    }

   if(p==c){
    cout << "YES";
   }

   else cout << "NO";


    return 0;
}
