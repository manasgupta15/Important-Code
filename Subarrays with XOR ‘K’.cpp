#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here

    /*
    Brute force
    int n = a.size();
    int count = 0;
    for(int i = 0; i<n;i++) {
        for(int j = i; j<n;j++) {
            int xorr = 0;
            for(int k = i; k<=j;k++) {
                xorr = xorr ^ a[k];
            }
            if(xorr == b) count++;
        }
    }

    return count;

    */

    /*
    better solution
    int n = a.size();
    int count = 0;
    for(int i = 0; i<n;i++) {
        int xorr = 0;
        for(int j = i; j<n;j++) {
            xorr = xorr ^ a[j];
            if(xorr == b) count++;
        }
    }

    return count;
    */

    // optimal solution
    int xr = 0;
    map<int,int> mpp;
    mpp[xr]++; // {0,1}

    int cnt = 0;
    for(int i = 0; i<a.size();i++) {
        xr = xr ^ a[i];
        //b
        int x = xr ^ b;
        cnt += mpp[x];
        mpp[xr]++;
    }

    return cnt;
    
}
