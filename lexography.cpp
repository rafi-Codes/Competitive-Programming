#include <iostream>
#include <string>
using namespace std;

string n, m;

int main() {
    cin >> n >> m;

    if (n.size() > 20 || m.size() > 20) {
        return 0;
    }


    if (n < m) {
        cout << n;
    } else {
        cout << m;
    }

    return 0;
}
