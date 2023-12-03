#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    // repeat until the left pointer passes the right pointer
    while (left <= right) {
        int mid = left + (right - left) / 2; // find the middle element
        // if the target is found, return its index
        if (arr[mid] == target) {
            return mid;
        } 
        // if the target is smaller, discard the right half
        else if (arr[mid] > target) {
            right = mid - 1;
        } 
        // if the target is larger, discard the left half
        else {
            left = mid + 1;
        }
    }
    // target not found
    return -1;
}

int main() {
    int arr[100], n, target, result;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
    result = binary_search(arr, 0, n - 1, target);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}

