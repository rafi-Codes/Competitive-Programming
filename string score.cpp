#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, score = 0;
    cin >> N;
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++){
        if (S[i] == 'V'){
            score += 5;
        }
        else if (S[i] == 'W'){
            score += 2;
        }
        else if (S[i] == 'X'){
            i++;
        }
        else if (S[i] == 'Y'){
            S.push_back(S[i+1]);
            i++;
        }
        else if (S[i] == 'Z'){
            if (S[i+1] == 'V'){
                score /= 5;
                i++;
            }
            else if (S[i+1] == 'W'){
                score /= 2;
                i++;
            }
        }
    }

    cout << score << endl;

    return 0;
}
