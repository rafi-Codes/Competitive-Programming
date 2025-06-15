#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    vector <int> c(n);
    bool flag = true;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < n; i++){
        if (c[i] == 1){
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "Easy" << endl;
    else cout << "Hard" << endl;
    return 0;
}
