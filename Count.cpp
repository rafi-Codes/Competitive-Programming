#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n.size(); i++){
        sum += n[i];
    }

    cout << sum - (49*n.size()) + n.size();

    return 0;
}
