#include<iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int multiple;
    cin >> multiple;
    
    int sum = 0;
    for(int i = 1; i<=multiple;i++) {
        cout << number * i << " ";
    }

    
    for(int i = 1; i<=multiple;i++) {
        sum = sum + (number * i);
    }

    cout << sum;
}