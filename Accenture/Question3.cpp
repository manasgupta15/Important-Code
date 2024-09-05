/*

Given a number N your task is to make N a single digit number by performing these operations

1) if N is odd, make it floor(N/2)
2) if N is even, make it floor(N-2)/2
3) if N is already a single digit, print as it is

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while(N >= 10) {
        if(N % 2 != 0) {
            N = floor(N/2);
        }

        else if(N%2 == 0) {
            N = floor((N-2))/2;
        }
    }

    cout << N << endl;
    return 0;

}