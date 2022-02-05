#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n){
    return n&1;
}

int getBit(int n, int i){
    int mask = 1<<i;
    return n&mask ? 1 : 0;
}

void setBit(int &n, int i){
    // n = 001010001, i = 3
    //     000001000) & n = (001011001)
    int mask = 1<<i;
    n = n|mask;
}

void clearBit(int &n, int i){
    // n = 001010001, i = 4
    //   ~(000010000) -> (111101111) & n = (001000001)
    int mask = ~(1<<i);
    n = n&mask;
}

void updateBit(int &n, int i, int v){
    int mask = ~(1<<i);
    int cleared_n = n&mask; // Same as clearBit()
    n = cleared_n|(v<<i);   // Assigning the value at ith bit
}

int clearLastIBits(int n, int i){
    // -1 = ~(0) = 1111111111111 (All ones)
    // n = 00101110001 (369), i = 5
    //     11111111111  -> (-1<<i) -> 11111100000 & n = (00101100000) (352)
    int mask = (-1<<i);
    return n&mask;

}

int clearRangeItoJ(int n, int i, int j){
    // n    = 001101111111 (895), i = 2, j = 5;
    //             j^  ^i
    // a    = 111111000000 = ~(0)<<(j+1)
    // b    = 000000000011 = (1<<i)-1
    // mask = 111111000011 = a | b
    // ans  = 001101000011 = n & mask = 835
    int a = -1 << (j+1), b = (1<<i)-1;
    int mask = a|b;
    return n&mask;

}

int main(){

     int n, i, v, j;
     cin >> n >> i >> v >> j;

     //cout << clearLastIBits(n, i);

     //cout << clearRangeItoJ(n, i, j);

     //cout << isOdd(n) << endl;
     //cout << getBit(n, i) << endl;

     /*setBit(n, i);
     cout << "Set Bit : " << n << endl;*/

     /*clearBit(n, i);
     cout << "Clear Bit : " << n << endl;*/

     /*updateBit(n, i, v);
     cout << "Update Bit : " << n << endl;*/


    return 0;
}
