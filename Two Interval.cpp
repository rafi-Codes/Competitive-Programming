#include <bits/stdc++.h>
using namespace std;

int main (){
    long long L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;
    
    if (L1 == R1 && L2 == R2 && L1 == L2) { 
        cout << L1 << " " << R1 << endl;
    }
    else if (L1 > R2 || L2 > R1) { 
        cout << -1;
    }
    else { 
        cout << max(L1, L2) << " " << min(R1, R2) << endl;
    }

    return 0;
}