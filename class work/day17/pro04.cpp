#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value : " << endl;
    cin >> n;
    int i, j, k;
    /*  for (int i = 0;i < n;i++) {

          for (int j = 0;j < i;j++) {
              cout <<" ";
              for (int k = 0;k <n-i;k++)
              {
                  cout <<"*";

              }
              cout << endl;
          }
      }
  }*/

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n - i; j >= 1; j--) cout << " ";
        for (int j = 1; j <= (2 * i) - 1; j++) cout << "*";
        cout << endl;
    }
}
for (int i = 1; i < n; i++) {
    for (int j = 0; j >= 1; j--) cout << " ";
    for (int j = 1; j <= (2 * i) - 1; j++) cout << "*";

    cout << endl;

}
