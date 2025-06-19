#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    map <int,int> ct;
    cin >> a >> b >> c;

    for(int x : {a,b,c}){
        ct[x]++;
    }

    if (ct[5] == 2 && ct[7] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
