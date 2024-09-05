/*

isPrime number
!prime number is a number that is greater than 1 and divided by 1 or itslf only

*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;  // Numbers less than or equal to 1 are not prime
    } else {
        for(int i = 2; i <= n/2; i++) {  // Iterate up to n/2 for efficiency
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        cout << "prime number" << endl;
    } else {
        cout << "not Prime Number" << endl;
    }

    return 0;
}
