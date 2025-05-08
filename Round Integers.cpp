#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll counter_round(ll n){

 if (n < 1) return 0;
 if (n < 10) return n;

 int digit = 0;
 ll temp =  n;
 while ( temp > 0){
    temp /= 10;
    digit++;
 }

 ll Count = 9ll * (digit -1);
 ll power = 1ll;

 for (int i = 1; i < digit; i++){
    power*= 10ll;
 }

 ll c_count = min(9ll, n/power);
 Count += c_count;

 return Count;
}


int main (){
  int t;
  cin >> t;

  while (t--){
    ll n;
    cin >> n;
    cout << counter_round(n) << endl;
  }
    return 0;
}
