#include <iostream>
#include <string>
#include <vector>

using namespace std;

void CountLetters(string& str) {
    vector<int> freq(26, 0);  


    for (char c : str) {
        freq[c - 'a']++;
    }

  
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)('a' + i) << " : " << freq[i] << endl;
        }
    }
}

int main() {
    string s;
    cin >> s;

    if (s.size() > 10000000) { 
        return 0;
    }

    CountLetters(s); 

    return 0;
}
