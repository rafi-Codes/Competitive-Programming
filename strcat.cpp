#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n, m;

    getline(cin, n);
    getline(cin, m);

    n.resize(n.size()+ m.size());

    int j = 0;
    for (int i = n.size()- m.size() ; i < n.size(); i++) {
        n[i] = m[j];
        j++;
    }

    cout << n;

    return 0;
}


