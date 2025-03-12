#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void reverser (string& s){
    string x;
    vector <string> y;
    reverse(s.begin(),s.end());

    istringstream word(s);

    while (word >> x ){
        y.push_back(x);
    }

    for (int i = y.size()-1; i >= 0 ; i--){
        cout << y[i];
        if (i != 0) cout << " ";
    }

}


int main() {
    string n;
    getline(cin,n);
    reverser(n);
    return 0;
}
