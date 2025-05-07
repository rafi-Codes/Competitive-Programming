#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        cout << num << endl;
    }
    return 0;
}
