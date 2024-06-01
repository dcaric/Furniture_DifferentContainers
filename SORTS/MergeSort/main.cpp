//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 01.06.2024..
//

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted vectors
/*
void merge(vector<int>& vec_a, vector<int>& vec_b, vector<int>& vec_c) {
    int na = vec_a.size();
    int nb = vec_b.size();
    vec_c.resize(na + nb); // Resize vec_c to hold the merged result
    int ia = 0, ib = 0, ic = 0;

    while (ia < na && ib < nb) {
        if (vec_a[ia] < vec_b[ib]) {
            vec_c[ic++] = vec_a[ia++];
        } else {
            vec_c[ic++] = vec_b[ib++];
        }
    }

    // Copy the remaining elements of vec_a, if any
    while (ia < na) {
        vec_c[ic++] = vec_a[ia++];
    }

    // Copy the remaining elements of vec_b, if any
    while (ib < nb) {
        vec_c[ic++] = vec_b[ib++];
    }
}

// Function to perform Merge Sort
void mergeSort(vector<int>& arr) {
    if (arr.size() < 2) return; // Base case: array is already sorted

    int mid = arr.size() / 2;

    // Create temporary vectors to hold the two halves
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    // Recursively sort the two halves
    mergeSort(left);
    cout << "Sorted LEFT: ";
    for (int num : left) {
        cout << num << " ";
    }
    cout << endl;
    
    mergeSort(right);
    cout << "Sorted RIGHT: ";
    for (int num : right) {
        cout << num << " ";
    }
    cout << endl;
    
    // Merge the sorted halves back into the original array
    merge(left, right, arr);
    cout << "Sorted: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
*/




void merge(vector<int> &array_a, int na, vector<int> &array_b, int nb) {
    int* array_c = new int[na + nb];
    int ia = 0, ib = 0;
    for (int ic = 0; ic < na + nb; ic++) {
        if (ia == na) { // a is empty.
            array_c[ic] = array_b[ib++];
            continue;
        }
        if (ib == nb) { // b is empty.
            array_c[ic] = array_a[ia++];
            continue;
        }
        if (array_a[ia] < array_b[ib]) {
            array_c[ic] = array_a[ia++];
        }
        else {
            array_c[ic] = array_b[ib++];
        }
    }
    
    for (int i = 0; i < na + nb; i++) {
        array_a[i] = array_c[i];
    }
    delete[] array_c;
}


void merge_sort(vector<int> &arr, int from, int to) {
    if (from == to) { // Stop condition.
        return;
    }

    int mid = (from + to) / 2;
    merge_sort(arr, from, mid);
    merge_sort(arr, mid + 1, to);

    merge(arr, mid - from + 1, arr, to - mid);
}

int mainMerge() {
    // Example vector to be sorted
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    // Print the vector before sorting
    cout << "MERGE SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Merge Sort
    merge_sort(arr,0, arr.size() - 1);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
