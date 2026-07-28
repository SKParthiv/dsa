#include<bits/stdc++.h>
using namespace std;


void insertion_sort(vector<int>& arr, int n);
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    insertion_sort(arr, n);
    for (auto it : arr) {
            cout << it << " ";
    }
}
void insertion_sort(vector<int>& arr, int n) {
    // We take a arr and then we have to iterators that go through the arr.
    // the first one will be the point where the unsorted part of the array starts.
    // Question. How does insert method of a vector work? What happens to other iterators when the insert method is called? Does it change to the next(if the iterator is on the location after the location of insert) or is it going to stay the same but there is just a address added to the arr? But I think the unedited other iterators is that way for doubly linked list so for vector should be

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                arr.insert(arr.begin()+j, arr[i]);
                arr.erase(arr.begin()+i+1);
                break
            }
        }
    }
}
