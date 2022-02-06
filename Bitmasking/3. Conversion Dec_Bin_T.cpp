#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0, pwr = 1;
    while(n){
        ans += pwr*(n&1);
        pwr*=10;
        n>>=1;
    }
    return ans;
}

int binaryToDecimal(int n){
    int ans = 0, pwr = 1;
    while(n){
        ans+=pwr*(n%10);
        n/=10;
        pwr*=2;
    }
    return ans;
}


int main(){

     int n;
     cin >> n;
     cout << decimalToBinary(n) << endl;
     // cin >> n;
     // cout << binaryToDecimal(n) << endl;


    return 0;
}
