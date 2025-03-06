#include <iostream>
#include <string>

using namespace std;

void Reverse(string& str) {
    char temp;

    for (int i = 0; i < str.size()/2; i++){

    temp = str[i];
    str [i] = str[str.size()-1-i];
    str [str.size()-1-i] = temp;
    }
}


int main(){

          string s,x;
          cin >> s;

          if(s.size() > 1000){
             return 0;
          }
          x = s;
          Reverse(s);
          if (x == s){
            cout << "YES";
          }
          else cout << "NO";

    return 0;
}
