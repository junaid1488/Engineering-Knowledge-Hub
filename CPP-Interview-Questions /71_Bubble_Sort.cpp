/*
File Name : 71_Bubble_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Bubble Sort
*/
// Input array elements.
// Compare adjacent elements.
// Swap if elements are in the wrong order.
// Repeat until the array is sorted.
// Display the sorted array.
#include <iostream>
using namespace std;

int main() {
    int a[] = {64, 34, 25, 12, 22};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);

    for (int x : a)
        cout << x << " ";
}
