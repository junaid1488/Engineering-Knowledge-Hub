/*
File Name : 73_Insertion_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Insertion Sort
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 11, 13, 5, 6};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for (int x : a)
        cout << x << " ";
}
