/*

it is edward birthday today. His friends have bought him a huge circular cake. Edward wants to find out the maximum number of pieces he can get by making exactly N straight vertical cuts on the cake.

Your task is to write a function that returns the maximum number of pieces that can be obtained by making N number of cuts

Note : since the answer can be quite large, modulo it by 1000000007

*/

#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int maxCakes(int N) {
    int result = ((N * (N + 1)) / 2) + 1;
    return result % mod;
}

int main()
{
    int N;
    cin >> N;

    cout << maxCakes(N);
}