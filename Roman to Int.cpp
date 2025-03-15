#include <bits/stdc++.h>
using namespace std;

int main() {

    map <char,int> rom;

    rom['I'] = 1;
    rom['V'] = 5;
    rom['X'] = 10;
    rom['L'] = 50;
    rom['C'] = 100;
    rom['D'] = 500;
    rom['M'] = 1000;


    string s;
    cin >> s;
    int sum = rom[s[0]];

    for (int i = 1; i < s.size(); i++){
        sum += rom[s[i]];
        if (rom[s[i-1]] < rom[s[i]]){
            sum -= 2*rom[s[i-1]];
        }
    }

    cout << sum;
    return 0;
}
