#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        vector <int> arr(x);
        for (int i = 0; i < x; i++){
            cin >> arr[i];
        }
        if (is_sorted(arr.begin(),arr.end()) && y == 1){
            cout << "YES" << endl;
        }
        else if (y >= 2) {
            cout << "YES" << endl;
        } 
        else if (y == 1 && x == 1){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    } 
    return 0;
}
