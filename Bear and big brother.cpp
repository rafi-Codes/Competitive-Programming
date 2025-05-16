#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, b , i = 0;
    cin >> l >> b;
    while (l <= b){
        l*= 3;
        b*= 2;
        i++;
    }
    cout << i << endl;
    return 0;
}
