#include <iostream>
using namespace std;

bool isLastDigitZero(int number) {

    return (number % 10 == 0);
}

int operation (int a){

   return a-1;

}


int main() {
    int n, t;
    cin >> n;
    cin >> t;
    while (t--) {
    if (isLastDigitZero(n)){
        n = n/10;
        isLastDigitZero(n);
    }
    else {
        n = operation(n);
    }
}
    cout << n;
    return 0;

}

// https://codeforces.com/contest/2071/problem/B
