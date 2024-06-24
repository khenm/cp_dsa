#include <bits/stdc++.h>
using namespace std;

int trailing_zeros(int n) {
    /*Count the number of trailing zeros 
    of the factorials of n.
    */
   // efficient way
    if (n < 0)
       return -1; 
    int zeros = 0; 
    for (int i = 5; i <= n; i *= 5) {
        zeros = zeros + n / i; 
    }
    return zeros; 
}

int main() {
    int test_number = 11;
    cout << "Number of trailing zeros of factorial of " << test_number << " is " << trailing_zeros(test_number); 
}