#include <bits/stdc++.h>
using namespace std;

// Big Factorial

// Example -
// Input  - 5
// Output - 120 
// Input  - 100
// Output - 9332621544394415268169923885626670049071596826438162146859296389521759999322991
//          5608941463976156518286253697920827223758251185210916864000000000000000000000000

void multiply(vector<int> &v, int &n, int no){

    int carry = 0;
    for(int i = 0; i<n; i++){
        int product = v[i]*no + carry;
        v[i] = product%10;
        carry = product/10;
    }
    while(carry){ 
        // This is done when there are no numbers left but carry is greater than 10
        v[n++] = carry%10;
        carry/=10;
    }
    

}

void bigFactorial(int number){

    vector<int> v(1000, 0);
    v[0] = 1;
    int n = 1; // number of digits of our current factorial

    for(int i = 2; i<=number; i++){
        multiply(v, n, i);
    }
    // print the number
    for(int i = n-1; i>-1; i--)
        cout << v[i];
    cout << endl;

}

int main(){

    int n;
    cin >> n;

    bigFactorial(n);

    return 0;
}

