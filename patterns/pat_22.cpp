#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n*2; i++) {
        for (int j = 1; j < n*2; j++) {
            cout << 1 + max(abs(n-i), abs(n-j)) << " ";
        }
        cout << "\n";
    }
    return 0;
}
