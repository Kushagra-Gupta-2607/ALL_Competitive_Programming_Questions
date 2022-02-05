#include <bits/stdc++.h>
using namespace std;

// Replace Bits in N by M

// Problem -
// You are given 2 32-bit numbers (N & M), and 2 bit positions (i & j).
// Write a method to set all bits b/w i & j in N equal to M.
// (i.e. M becomes a substring of N starting from i and ending at j)

// Example -
// Input:  N = 10000000000 (1024), M = 10101 (21), i = 2, j = 6
// Output: N = 10001010100 (1108)

int main(){

     int n, m, i, j;
     cin >> n >> m >> i >> j;

     // First clear the bits from [i, j].
     int a = -1<<(j+1), b = (1<<i)-1;
     int mask = a|b;
     n = n&mask;

     // Make M shift by i and get answer.
     int ans = n|(m<<i);
     cout << ans << endl;


    return 0;
}

