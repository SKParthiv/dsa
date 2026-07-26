#include<bits/stdc++.h>
using namespace std;

vector<int>::iterator min_it(vector<int>& arr, vector<int>::iterator it);

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    int m;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        vector<int> slice(n, 0);

        auto it_for_min = min_it(arr, it);
        swap(it, it_for_min);
    }
}


vector<int>::iterator min_it(vector<int>& arr, vector<int>::iterator it) {
    int min = arr.at(0);
    vector<int>::iterator it_min;
    while (it != arr.end()) {
        if (min > (*it)) {
            min = *it;
            it_min = it;
        }
        it++;
    }
    return it_min;
}
