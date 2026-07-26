#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            if (j==0 || j==(n-1)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
   }
    cout << "\n";

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
}
