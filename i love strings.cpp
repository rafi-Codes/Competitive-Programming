#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(string& str,string& str1){
    int j = 0, i = 0;
    while (i < str.size() && j < str1.size()){
           cout << str[i++];
           cout << str1[j++];
    }

    while(i < str.size()){
        cout << str[i++];
    }

    while(j < str1.size()){
        cout << str1[j++];
    }

}


int main() {

    int n;
    cin >> n;
    while (n--){

        string s,t;
        cin >> s >> t;

        if (s.size() > 50 || t.size() > 50) {
        return 0;
        }

        solve(s,t);
        cout << endl;
    }

    return 0;
}
