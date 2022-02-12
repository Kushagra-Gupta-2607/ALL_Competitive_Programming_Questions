/*
Catalan Series
---------------
1, 1, 2, 5, 14, 42, 132, . . . 
  
  
Q1. Count no. of BST's with N nodes.
Answer = Nth catalan no.

                      2N             1
1. Direct Formula:      C      *   _____
                          N        (N+1)
                          

2. Recursive Approach:    1, 2, 3, ... i ... N-1, N

                     Left of i: (i-1)      Right of i: (N-i)
                     
 F(N) = Σ (f(i-1) * f(N-i)) ... where i = 1 to N
 
 
 Q1. Count no. of BT's with N nodes.
 Answer = N! * Nth Catalan no.

Refer: 
https://en.wikipedia.org/wiki/Catalan_number#Applications_in_combinatorics
*/
