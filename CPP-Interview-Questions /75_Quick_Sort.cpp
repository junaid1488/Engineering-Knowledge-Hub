/*
File Name : 75_Quick_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Quick Sort
*/

#include <iostream>
using namespace std;

int partition(int a[], int l, int h) {
    int pivot = a[h], i = l - 1;

    for (int j = l; j < h; j++)
        if (a[j] < pivot)
            swap(a[++i], a[j]);

    swap(a[i + 1], a[h]);
    return i + 1;
}

void quickSort(int a[], int l, int h) {
    if (l < h) {
        int p = partition(a, l, h);

        quickSort(a, l, p - 1);
        quickSort(a, p + 1, h);
    }
}

int main() {
    int a[] = {10, 7, 8, 9, 1};
    int n = 5;

    quickSort(a, 0, n - 1);

    for (int x : a)
        cout << x << " ";
}
