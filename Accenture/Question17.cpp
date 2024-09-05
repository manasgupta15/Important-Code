#include<iostream>
#include<cmath>  // Use <cmath> for abs() in C++
using namespace std;

int finddiff(int arr[], int num, int diff, int n) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (abs(arr[i] - num) <= diff) {
            count += 1;
        }
    }

    return count > 0 ? count : -1;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int *arr = new int[n]; // Dynamically allocate array based on n

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num, diff;
    cout << "Enter the number to compare: ";
    cin >> num;
    cout << "Enter the difference threshold: ";
    cin >> diff;

    int result = finddiff(arr, num, diff, n);
    cout << "Result: " << result << endl;

    delete[] arr;  // Free dynamically allocated memory
    return 0;
}
