#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector <long long int>& arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
            int n,l = 0;
            cin >> n;
            if (1 <= n && n <= 1000) {

                vector<long long int> A(n);
                vector<long long int> B(n);

                for (int i = 0; i < n; ++i) {
                    cin >> A[i];
                }

                for (int i = 0; i < n; ++i) {
                    cin >> B[i];
                }

                bubbleSort(A,n);
                bubbleSort(B,n);

                for (int i = 0; i < n; i++){
                    if (A[i]== B[i]){
                        l = 1;
                    }
                    else {
                        l = 0;
                        break;
                    }
                }

           if (l) cout << "yes";
           else cout << "no";
        }
        return 0;
}
