//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 31.05.2024..
//


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no elements were swapped in the inner loop, then the array is already sorted
        if (!swapped) break;
    }
}

int mainBubble() {
    // Example array to be sorted
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    // Print the array before sorting
    cout << "Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Bubble Sort
    bubbleSort(arr);

    // Print the array after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
