/*
FIBONACCI FACTS
----------------
F(N) = F(N-1) + F(N-2)



Sample Problems
----------------
Q1. Find the no. of boolean strings of length N, with no consecutive 1's.

Intuition:
1. F(N-1) = ________N-1_______ 0
2. F(N-2) = ________N-2______ 01


Q2. FInd the no. of ways to build a wall of size 2xN, with bricks of size, 1x2 (.) and 2x1 (,).

Intuition:
1. F(N-1) = . __________N-1_______
2. F(N-2) = ,  _________N-2_______



How to Compute
---------------
- Recursion                                   -> 2^N
- Top-Down DP                                 -> O(N)
- Bottom-Up DP                                -> O(N)
- DP with space optimization (3 variables)    -> O(N), O(1)
- Matrix Exponentiation                       -> O(k^3 logN) = O(logN)
- Binet's Formula (works for small values)    -> O(1)
- Codeforces Hack                             -> O(logN * log log N)
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll
const ll mod = 1e9+7; // modulo
map<ll, ll> F;
f[0] = f[1] = 1;

ll hack(ll n){

    if(F.count(n)) return F[n];
    ll k = n/2;
    if(n%2 == 0){
        return F[n] = (hack(k)*hack(k) + hack(k-1)*hack(k-1)) % mod;
    }
    else{
        return F[n] = (hack(k)*hack(k+1) + hack(k-1)*hack(k)) % mod;
    }

}

int main(){

    ll n;
    cin >> n;

    F[0] = 0;
    F[1] = 1;
    cout << hack(n) << endl;
  
    return 0;
}

/*
Interesting Properties
-----------------------
Zackendorf's Theorem: Each positive number can be written in a unique way as sum of one or more
                      fibonacci numbers such that some doesn't include and 2 consecutive numbers.
100 = 89 + 8 + 3
77 = 55 + 21 + 1
17 = 13 + 3 + 1


Pisano Period: Last 1/2/3/4 digit(s) of fibonacci no. repeat with period of 60/300/1500/15000 respectively.
*/



