#include<bits/stdc++.h>
using namespace std;

int main (){

  int t;
  cin >> t;

  while (t--){

    int ar, num, c = 1;
    double sum = 0;
    cin >> ar;

    num = ar;

    while (num > 10){
        num /= 10;
        c++;
    }
    int x, flag;
    int n = ar;

    for (int i = 0; i < c; i++){
        x = n % 10;
        n /= 10;
        sum += x;
    }

    for (int i = 2; i < sum; i++){
        if ((int)sum % i == 0){
            flag = 1;
            break;
        }
        else flag = 0;
    }

    if (flag) cout << "No" << endl;
    else cout << "Yes" << endl;

  }

  return 0;

}
