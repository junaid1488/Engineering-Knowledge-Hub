/*
File Name : 74_Merge_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Merge Sort
*/
// Divide the array into halves.
// Sort both halves recursively.
// Merge the sorted halves.
// Repeat until fully sorted.
// Display the sorted array.
#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int i = 0; i < n2; i++) R[i] = a[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    merge(a, l, m, r);
}

int main() {
    int a[] = {38, 27, 43, 3, 9};
    int n = 5;

    mergeSort(a, 0, n - 1);

    for (int x : a)
        cout << x << " ";
}
