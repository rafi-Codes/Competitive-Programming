#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){

    ll a, b, c, d, p, h = 100;
    cin >> a >> b >> c >> d;
    p = ((a%h) * (b%h) * (c%h) * (d%h)) % h;

    cout << setw(2) << setfill('0') << p << endl;
    return 0;
}
