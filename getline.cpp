#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n;

    getline(cin, n);

    if (n.size() > 1000000){
        return 0;
    }

    for (int i = 0; i < n.size(); i++){
        if (n[i] != '\\'){
            cout << n[i];
        }

        else break;
    }
    return 0;
}


