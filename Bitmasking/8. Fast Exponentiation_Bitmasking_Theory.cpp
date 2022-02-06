#include <bits/stdc++.h>
using namespace std;

// Exponentiation Power Using Bitmasking

int powerOptimised(int a, int n){

    int ans = 1;
    while(n){
        if(n&1) ans*=a; // last bit check
        a*=a;
        n>>=1;
    }
    return ans;

}


int main(){

    int a, n;
    cin >> a >> n;

    cout << powerOptimised(a, n) << endl;

    return 0;
}

