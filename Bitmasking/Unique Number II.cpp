#include <bits/stdc++.h>
using namespace std;

// Problem - 
// We are given an array containg n numbers. All the numbers are present twice except for 2 numbers 
// which are present only once. Find the unique numbers in linear time without using any extra space.

// Example -
// Input - n = 8, arr = [1, 3, 1, 2, 5, 2, 7, 5]
// Output - [3, 7]


int main(){

     int n, res = 0;
     cin >> n;
     vector<int> v(n);     
     for(int i = 0; i<n; i++){
        cin >> v[i];
        res^=v[i];
     }
     // res = 3^7 = binary(100) = 4
     int bit_pos = 1, a = 0, b;
     while(res&bit_pos == 0){
        bit_pos<<=1; 
       // Checking for the 1st set bit with 1
       // This is done because having 1 in res means only one value had 1 in that set bit
     }
    // bit_pos = binary(100)
     for(int i = 0; i<n; i++){
        if(bit_pos&v[i]) a^=v[i];
     }
     b = res^a;
    // a = 0 ^ 5 ^ 7 ^ 5 = 7
    // b = (3^7) ^ 7 = 3
     
     cout << min(a, b) << " " << max(a, b) << endl; 
     
    return 0;
}
