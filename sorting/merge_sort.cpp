#include<bits/stdc++.h>
using namespace std;

void merge_sort(vector<int>& arr, pair<int, int> n);

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    for (auto it : arr) {
            cout << it << " ";
    }
}


void merge_sort(vector<int>& arr, pair<int, int> n) {
    pair<int, int> part1 = {n.first, (int)((n.second - n.first)/2)};
    pair<int, int> part2 = {(int)((n.second - n.first)/2)+1, n.second};
    if (part1.first != part1.second) {
        merge_sort(arr, part1);
    }
    if (part2.first != part2.second) {
        merge_sort(arr, part2);
    }
    auto it1 = part1.first + arr.begin();
    auto it2 = part2.first + arr.begin();
    vector<int> merged_arr;
    while (it1 != arr.begin()+part1.second || it2 != arr.begin()+part2.second) {
        if (it1 != arr.end() && *it1 > *it2) {
            merged_arr.push_back(*it1);
            it1++;
        }
        else {
            merged_arr.push_back(*it2);
            it2++;
        }
    }
    copy(merged_arr.begin(), merged_arr.end(), arr.begin()+part1.first);
}

// Length of the arr if not 1 then divide into 2 parts
// if the first part not 1 then mergesort that part
// then we have part 1 sorted
// then merge sort the second part if its size is not 1
// then we have part 2 sorted
// then we merge the 2
