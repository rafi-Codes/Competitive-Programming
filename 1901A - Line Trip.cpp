#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int maxGap = arr[0];
        for (int i = 0; i < n - 1; i++){
            maxGap = max(maxGap, arr[i+1] - arr[i]);
        }
        maxGap = max(maxGap, 2 * (x - arr[n-1]));
        cout << maxGap << endl;
    } 
    return 0;
}
