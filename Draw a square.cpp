#include <iostream>
using namespace std;

int main (){

   int l,r,d,u,t;
   cin >> t;
   while (t--){
    cin >> l >> r >> d >> u;
    int sum = l + r + d + u;
    int avg = sum / 4;
    if (avg == l && avg == r && avg == d && avg == u){
        cout << "YES" << endl;
        sum = 0;
        avg = 0;
    }
    else {
        cout << "NO" <<endl;
        sum = 0;
        avg = 0;
    }

   }
   return 0;

}
