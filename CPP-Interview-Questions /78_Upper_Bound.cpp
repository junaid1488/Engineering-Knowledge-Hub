#include <iostream>
using namespace std;

int upperBound(int arr[], int n, int key) {
    int low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= key)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
    int arr[] = {2, 4, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]), key;
    cout << "Enter element: ";
    cin >> key;
    cout << "Upper Bound Index: " << upperBound(arr, n, key);
    return 0;
}
