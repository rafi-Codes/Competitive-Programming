#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void CharacterCase(string& str) {
    for (char& c : str) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        } else {
            c = ' ';
        }
    }
}


int main(){

    string s;
    cin >> s;

    if(s.size() > 100000){
        return 0;
    }

    CharacterCase(s);
    cout << s;
    return 0;
}
