#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if (x < 2) return x;

    int low = 1, high = x / 2, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= x / mid) { 
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
  }

int main (){
  int x;
  cin >> x;
  ans = mySqrt(x);
  cout << ans;
  return 0;
}
