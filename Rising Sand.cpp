#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <long long> P(n);
        
        for (int i = 0; i < n ; i++){
            cin >> P[i];
        }
        
        if (k == 1) cout << (n-1)/2 << endl;
        else {
            int ct = 0;
            for (int i = 1; i < n - 1 ; i++){
                if (P[i] > P[i-1]+P[i+1]) ct++;
            }
            cout << ct << endl;
        }    
    
    }
    return 0;
}
