#include <bits/stdc++.h>
using namespace std;

// Inclusion Exclusion Principle

// |A U B|      = |A| + |B|       - |A ∩ B|
// |A U B U C|  = |A| + |B| + |C| - |A ∩ B| - |B ∩ C| - |C ∩ A| + |A ∩ B ∩ C|

// General Trend -
// 1. Generate Subsets
// 2. If odd no. of elements -> (+)
// 3. Else -> (-)

// Problem1 -
// How many numbers are there which are less than 1000 and divisible by 2, 3 and 5?
// Ans => |2 U 3 U 5|  = |2| + |3| + |5| - |2 ∩ 3| - |3 ∩ 5| - |5 ∩ 2| + |2 ∩ 3 ∩ 5|
void problem1(int n){

    n--;
    int ans = 0;
    ans+=n/2;
    ans+=n/3;
    ans+=n/5;
    ans-=n/6;
    ans-=n/15;
    ans-=n/10;
    ans+=n/30;
    cout << ans << endl;

}

// Generalized Problem -
// Find out the number of numbers between 1 and n
// which are divisible by any of the prime numbers less than 20.
#define ll long long

void generalizedProblem(int n){

    vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19};
    ll subsets = (1<<primes.size());
    ll ans = 0;

    for(int i = 1; i<subsets; i++){ // 0 is not necessary
        ll denominator = 1ll;
        ll subsets = __builtin_popcount(i);

        for(int j = 0; j<primes.size(); j++){
            if(i & (1<<j)) denominator*=primes[j];
        }
        if(subsets&1) ans+=n/denominator;
        else ans-=n/denominator;
    }
    cout << ans << endl;

}

int main(){

    int n;
    cin >> n;

    problem1(n);

    generalizedProblem(n);
    // Can also store them in an array and perform sort for the required output

    return 0;
}

