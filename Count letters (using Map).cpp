#include <iostream>
#include <string>
#include <map>
using namespace std;



int main() {
    map <char, int> counter;
    string s;
    int x;
    cin >> s;
    for (char i : s){
        counter[i]++;
    }

    for (auto& c : counter){
        cout << c.first << " " << c.second << endl;
    }



    return 0;

}
