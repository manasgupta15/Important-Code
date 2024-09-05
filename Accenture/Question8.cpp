
// find the target element in the array

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int left, int right, int target) {

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int left = 0;
    int right = n - 1;

    bool result = binarySearch(arr, left, right, target);

    if (result) {
        cout << "Yes, present";
    }
    else {
        cout << "Not present";
    }

    return 0;
}
