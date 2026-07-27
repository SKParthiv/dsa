#include<bits/stdc++.h>
using namespace std;

vector<int>::iterator min_it(vector<int>& arr, vector<int>::iterator it);
void selection_sort(vector<int>& arr, int n);
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    selection_sort(arr, n);
    for (auto it : arr) {
            cout << it << " ";
    }
}

void selection_sort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    for (auto it = arr.begin(); it != arr.end(); it++) {
        auto it_for_min = min_it(arr, it);
        auto it_holder = it;
        swap(*it_holder, *it_for_min);
    }
}

vector<int>::iterator min_it(vector<int>& arr, vector<int>::iterator it) {
    int min = *it;
    auto it_min = it;
    while (it != arr.end()) {
        if (min > (*it)) {
            min = *it;
            it_min = it;
        }
        it++;
    }
    return it_min;
}
