#include <iostream>
using namespace std;

int main()
{
    // Problem - Unique Number (2N + 1 elements)
    // Every no. occurs twice except one no. Find that no.

    int n, ans = 0;
    cin >> n;

    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        ans^=x;
    }

    cout << ans << endl;
    
    // BITWISE XOR operator used -> O(1) space

    return 0;
}
