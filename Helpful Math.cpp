#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector <char> x;
    cin >> s;
    
    if (s.size() == 1) cout << s << endl;
    
    else{
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '+'){
            x.push_back(s[i]);
        }
    }
    
    sort(x.begin(),x.end());
    
    for (int i = 0; i < x.size(); i++){
        cout << x[i];
        if (i < x.size()-1) cout << '+';
       }
   }
    return 0;
}
