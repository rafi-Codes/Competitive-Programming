#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int count_space(string& s){
    int Count = 0;
    bool l = false;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (!l) {
                Count++;
                l = true;
            }
        } else {
            l = false;
        }
    }

    return Count;
}


int main() {
    string n;
    getline(cin,n);
    cout << count_space(n);
    return 0;
}
