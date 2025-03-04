#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n;
    int t;
    cin >> t;
    while (t--){

    cin >> n;
    if (n.size() > 10){
        cout << n[0] << n.size()-2 << n[n.size()-1]<< endl;
    }

    else cout << n <<endl;
    }
    return 0;
}
