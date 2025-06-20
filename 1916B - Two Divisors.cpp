#include <iostream>
using namespace std;

long long gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {

        long long a, b;
        cin >> a >> b;

        if (b % a == 0) {
            long long k = b / a;
            cout << b * k << endl;
        }

        else {
            long long g = gcd(a, b);
            cout << a * (b / g) << endl;
        }
    }
    return 0;
}
