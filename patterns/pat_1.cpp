#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "The pattern will have " << n << " stars and the no. of lines will also be " << n << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
