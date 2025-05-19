#include <iostream>
using namespace std;

void nearlyLuckyNumber(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    
    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    nearlyLuckyNumber(n);
    return 0;
}
