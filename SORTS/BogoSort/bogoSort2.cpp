#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if the vector is sorted
bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to perform Bogo Sort using permutations
void bogoSort(vector<int>& arr) {
    // Sort the array initially to start with the first permutation
    sort(arr.begin(), arr.end());

    // Check if the array is sorted (it will be sorted initially)
    if (isSorted(arr)) {
        return;
    }

    // Generate permutations until the array is sorted
    while (!isSorted(arr)) {
        next_permutation(arr.begin(), arr.end());
    }
}

int main() {
    // Example vector to be sorted
    vector<int> arr = {3, 2, 5, 1, 4};

    // Print the vector before sorting
    cout << "BOGO SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Bogo Sort
    bogoSort(arr);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
