#include<bits/stdc++.h>
using namespace std;

int main (){

    int ar, num, c = 1;
    vector<int> freq(9, 0);
    cin >> ar;

    num = ar;

    while (num > 10){
        num /= 10;
        c++;
    }

    int x;
    int n = ar;

    for (int i = 0; i < c; i++){
        x = n % 10;
        n /= 10;
        freq[x]++;
    }

    for(int x : freq){
        cout << x << " ";
    }


  return 0;

}
