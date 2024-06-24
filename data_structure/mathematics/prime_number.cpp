#include <bits/stdc++.h>
using namespace std;

// naive method
// time complexity: O(n)
// space complexity: O(1)
bool isPrime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true; 
}

// efficient method
// idea: divisors always appear in pairs
// if x * y = n and x <= y --> x * x <= n or x <= sqrt(n)
// time complexity: O(sqrt(n))
bool isPrime_efficient(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true; 
}

// OPTIMAL SOLUTION
// more efficient method
// idea: skip the value dvisible by 2 or 3
bool more_efficient_primecheck(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true; 
}

int main() {
    int x = 25;
    cout << more_efficient_primecheck(x); 
}