#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> a(n, vector<long long>(m));
    vector <long long> result;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i){
            result.push_back(a[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; ++i){
            result.push_back(a[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i){
                result.push_back(a[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i){
                result.push_back(a[i][left]);
            }
            left++;
        }
    }
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    return 0;
}
