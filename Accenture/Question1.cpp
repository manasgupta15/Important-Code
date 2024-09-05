/*

In an array, a superior element is one which is greater than all the elements to its right side. The rightmost element itselft be a superior element

you are given a function
int Find_Number_Of_Superior_Element(int arr[], int n);

The function accepts an integer array and the size of array. Implement the function to find the total number of superior elements present in an array.

Assumptions:
N > 0 AND Array starts from 0

Input : n = 6;
arr = [8,10,6,2,9,7]
output = 3

*/


#include<bits/stdc++.h>
using namespace std;

int Find_Number_Of_Superior_Element(int arr[], int n) {
    int count = 0;
    int super = INT_MIN;

    // Traverse from the rightmost element
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] > super) {
            count++;
            super = arr[i];
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = Find_Number_Of_Superior_Element(arr, n);

    cout << result << endl;

    return 0;
}
