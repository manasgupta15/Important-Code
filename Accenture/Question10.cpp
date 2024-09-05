#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements :" << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "The array elements are: " << endl;
    for(auto &ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    // Finding the second largest in even-indexed elements
    int largest = INT_MIN;
    int second_lar = INT_MIN;

    for(int i = 0; i < n; i += 2) {  // Only iterate over even indices
        if(v[i] > largest) {
            second_lar = largest;
            largest = v[i];
        } else if(v[i] > second_lar && v[i] != largest) {
            second_lar = v[i];
        }
    }

    // Finding the second smallest in odd-indexed elements
    int smallest = INT_MAX;
    int second_sma = INT_MAX;

    for(int i = 1; i < n; i += 2) {  // Only iterate over odd indices
        if(v[i] < smallest) {
            second_sma = smallest;
            smallest = v[i];
        } else if(v[i] < second_sma && v[i] != smallest) {
            second_sma = v[i];
        }
    }

    if (second_lar == INT_MIN) {
        cout << "No second largest element found in the even-indexed elements." << endl;
    } else {
        cout << "The second largest element in the even-indexed elements is: " << second_lar << endl;
    }

    if (second_sma == INT_MAX) {
        cout << "No second smallest element found in the odd-indexed elements." << endl;
    } else {
        cout << "The second smallest element in the odd-indexed elements is: " << second_sma << endl;
    }

    cout << "Sum of second largest even-indexed element and second smallest odd-indexed element: ";
    cout << second_lar + second_sma << endl;

    return 0;
}
