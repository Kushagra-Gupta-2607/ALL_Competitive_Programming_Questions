#include <bits/stdc++.h>
using namespace std;

// Finding Subsequence/Subsets of a given string.
// Input - "abc"
// Output - "", "a", "ab", "abc", "ac", "b", "bc", "c"

void filterChars(int n, char a[]){

    int j = 0;
    while(n){
        if(n&1) cout << a[j];
        j++;
        n>>=1;
    }
    cout << endl;

}

void printSubsets(char a[]){

    int n = strlen(a);
    for(int i = 0; i<(1<<n); i++){
        filterChars(i, a);
    }

}

int main(){

    char a[100];
    cin >> a;

    printSubsets(a);
    // Can also store them in an array and perform sort for the required output

    return 0;
}

