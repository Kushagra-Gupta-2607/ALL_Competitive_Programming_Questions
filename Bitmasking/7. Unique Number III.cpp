#include <bits/stdc++.h>
using namespace std;

// Problem -
// We are given an array containing n numbers.
// All the numbers are present thrice except for one number which is only present once.
// Find the unique number. Only use - bitwise operators, and no extra space.

// Example -
// Input - n = 7, arr = [1, 1, 2, 2, 1, 3, 2]
// Output - 3


int main(){

    int n, res = 0;
    cin >> n;
    vector<int> sum(64, 0);
    for(int i = 0; i<n; i++){
        int x, j = 0;
        cin >> x;
        while(x){
            sum[j++]+=(x&1);
            x>>=1;
        }
    }
    for(int i = 0, pwr = 1; i<64; i++, pwr<<=1){
        res+=(sum[i]%3)*pwr;
    }

    cout << res << endl;

    return 0;
}

// Solution -
//      1 - 001
//      1 - 001
//      2 - 010
//      2 - 010
//      1 - 001
//      3 - 011
//      2 - 010
//  Sum  =  044 -> %3 at every place
//       =  011 = 3
// Thus, we can find for any no. of duplicates in the array and not just 3.
