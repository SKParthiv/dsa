#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char x = 'A';
	for(int i = n; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << x << " ";

			x++;
		}
		x = 'A';
		cout << "\n";
	}
}
