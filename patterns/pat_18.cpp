#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    --n;
    char x = 'A';
    for (char i = (int)x + n; i >= (int)x; i--) {
        for (char j = i; j <= (int)x + n; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
    return 0;
}
