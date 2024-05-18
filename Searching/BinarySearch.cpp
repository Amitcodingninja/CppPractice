// Input: arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170}, x = 110
// Output: 6
// Explanation: Element x is present at index 6.

// Input: arr[] = {10, 20, 30, 40, 60, 110, 120, 130, 170}, x = 175
// Output: -1
// Explanation: Element x is not present in arr[].

// Time Complexity: O(log n)
// Auxiliary Space: O(log n)

#include <iostream>
using namespace std;

// Recursive Way to Solve Binary Search

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)// Base Condition

    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)

            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int x = 60;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is Present at index " << result << endl;
    }
    return 0;
}