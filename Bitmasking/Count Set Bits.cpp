#include <bits/stdc++.h>
using namespace std;

int countBits(int n){
    int ans = 0;
    while(n){
        ans+=n&1;
        n>>=1; // left shifting 1 can also be done.
    }
    return ans; // (O(k)*k) where k = log(n)+1
    // because k iterations here
}

int countBitsFast(int n){
    int ans = 0;
    while(n){
        n = n&(n-1); // Removes last set bit.
        ans++;
    }
    return ans; // (O(k)*ans) where k = log(n)+1
    // iterations for every count bit once.
}



int main(){

     int n;
     cin >> n;

     cout << countBits(n) << endl;
     cout << countBitsFast(n) << endl;
     cout << __builtin_popcount(n) << endl;


    return 0;
}
