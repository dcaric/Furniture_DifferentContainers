//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 31.05.2024..
//

#include <iostream>
#include <vector>


using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted portion of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted portion
        swap(arr[i], arr[minIndex]);
    }
}

int mainSelection() {
    // Example array to be sorted
    vector<int> arr = {64, 25, 12, 22, 11};

    // Print the array before sorting
    cout << "Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Selection Sort
    selectionSort(arr);

    // Print the array after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
