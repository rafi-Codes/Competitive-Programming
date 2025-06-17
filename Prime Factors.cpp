#include <bits/stdc++.h>
using namespace std;

vector < pair <int,int> > primeFactor (int& n){

    vector < pair <int,int> > ans;
    int ct = 0;
    while (n%2 == 0){
        n /= 2;
        ct++;
    }
    if (ct > 0 ) ans.push_back({2,ct});
    for (int i = 3; i * i <= n; i+=2){
        ct = 0;
        while (n % i == 0){
            n /= i;
            ct++;
        }
    if (ct > 0) ans.push_back({i,ct});
    }
    if (n > 2){
      ans.push_back({n,1});
    }

    return ans;
}


int main() {

    int n;
    cin >> n;
    auto pF = primeFactor(n);

    for (int i = 0; i < pF.size(); i++) {
        cout << "(" << pF[i].first << "^" << pF[i].second << ")";
        if (i != pF.size() - 1) cout << "*";
    }
    return 0;
}
