#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr, int n);

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    bubble_sort(arr, n);
    for (auto it : arr) {
            cout << it << " ";
    }
}

void bubble_sort(vector<int>& arr, int n) {
    int cc = 0;
    do {
        cc = 0;
        for (auto it = arr.begin(); it != arr.end()-1; it++) {
            if (*it > *(it+1)) {
                swap(*it, *(it+1));
                cc++;
            }
        }
    }while (cc != 0);
}
