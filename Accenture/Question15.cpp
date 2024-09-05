
/*
The function accepts 2 positive integers 'm' and 'n' as its argument. You are required to calculate the sum of numbers divisible by 3 and 5, between 'm' and 'n' both inclusive and return the same;
*/

#include<iostream>
using namespace std;

int calculate(int m, int n) {
    int sum = 0;

    while(m <=n) {
        if(m%3 == 0 && m%5 == 0) {
            sum += m;
        }
        m++;
    }

    return sum;
}

int main()
{
    int m;
    cout << "Enter the value of m" << endl;
    cin >> m;

    int n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    int result = calculate(m,n);
    cout << result;
}