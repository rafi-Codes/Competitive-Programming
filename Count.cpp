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
    
    cout << sum - (48*n.size());

    return 0;
}
