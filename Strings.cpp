#include <iostream>
#include <vector>
#include <string>
using namespace std;

void length (string x){

   cout << x.size();
}


int main() {
    string n, m,c;
    char temp;

    cin >> n >> m;

    if (n.size () > 10 || m.size() > 10){
        cout << "Large input" <<endl;
        return 0;
    }

    length(n);
    cout << " ";
    length(m);
    cout << endl;

    c = n+m;

    temp = n[0];
    n[0] = m[0];
    m[0] = temp;

    cout << c << endl;
    cout << n << " " << m << endl;

    return 0;
}
