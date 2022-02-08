#include <bits/stdc++.h>
using namespace std;

/*
Birthday Paradox Problem
-------------------------
What is the minimum number of people that should be present in a hall
so that there's atleast 50% chance of 2 people having the same birthday?
-------------------------
*/
/*
Intuition -

2 people having same birthday     = p = 50% = 0.5      -> X
Then,
all people having diff. birthdays = 1-p = 1-0.5 = 0.5  -> Y

Case Y -

1 person - 365/365 = 100%
2 people - (365/365) * (364/365) = 99.73%
3   "    -     "     "     "     = 99.18%

23                               = ~ < 50% -> Case X -> ~ >50%

*/

int birthdayParadox(){

    double x = 1.0; // P(2 ppl having same b'day) = x
    int people = 0;
    double num = 365, den = 365;
    double p;
    cin >> p; // in the intuition 50% is taken

    if(p == 1){
        // here it denotes P(2 ppl having diff. bday's) = 0% = 0
        return 366;
    }
    while(x>1-p){
        x = x*num/den;
        num--;
        people++;
        //cout << "people: " << people << ", x: " << x << endl;
    }
    return people;
    // double is used for corner case when p is given 1 here
    // if a float had been used then answer would be less than 366.
    // But still an edge case is appreciated anyhow

}

int main(){

    cout << birthdayParadox() << " people." << endl;

    return 0;
}

