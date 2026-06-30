// Author: Mohd Juned
// Language: C++
// Topic: Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}
