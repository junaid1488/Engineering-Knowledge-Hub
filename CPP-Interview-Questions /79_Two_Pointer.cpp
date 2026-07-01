#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "Pair Found: " << arr[left] << " " << arr[right];
            return 0;
        }
        if (sum < target)
            left++;
        else
            right--;
    }

    cout << "Pair Not Found";
    return 0;
}
