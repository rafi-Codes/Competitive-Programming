#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n, m;

    getline(cin, n);
    getline(cin, m);

    if (n.size()> 1000 || m.size()> 1000 ){
        return 0;
    }

    cout << n.size() << " ";
    cout << m.size() << endl;

    cout << n << " ";
    cout << m;

    return 0;
}


