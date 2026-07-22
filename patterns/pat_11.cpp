#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if (j % 2 == i % 2) {
				cout << "0";
			}
			else if (j % 2 != i % 2){
				cout << "1";
			}
		}
		cout << "\n";
	}
	return 0;
}
