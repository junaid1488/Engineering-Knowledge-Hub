/*
File Name : 72_Selection_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Selection Sort
*/
// Input array elements.
// Find the minimum element.
// Swap with the current position.
// Repeat for all positions.
// Display the sorted array.
#include <iostream>
using namespace std;

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int mn = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[mn])
                mn = j;

        swap(a[i], a[mn]);
    }

    for (int x : a)
        cout << x << " ";
}
