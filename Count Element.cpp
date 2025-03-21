#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n,c = 0;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int j = 0; j < n; j++){
       for (int i = 0; i < n; i++){
        if (a[i] - a[j] == 1){
            c++;
            break;
        }
      }
   }

    cout << c << endl;

}

int main() {
    solve();
    return 0;
}
