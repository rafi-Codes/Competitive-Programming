#include<bits/stdc++.h>
using namespace std;

int main (){

  int t;
  cin >> t;

  while (t--){

    int ar, num, x, c = 1;
    double sum = 0;
    cin >> ar;

    num = ar;
    while (num > 10){
        num /= 10;
        c++;
    }

    num = ar;
    for (int i = 0; i < c; i++){
        x = num % 10;
        num /= 10;
        sum += pow(x,c);
    }

    if (sum == ar) cout << "Yes" << endl;
    else cout << "No" << endl;

  }
  return 0;
}
