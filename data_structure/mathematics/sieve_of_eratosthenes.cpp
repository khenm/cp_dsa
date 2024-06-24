#include <bits/stdc++.h>
using namespace std;

// sieve of eratosthenes is the algorithm to find all the prime numbers
// less than or equal to n

// simple implementation
void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j = j + i) {
                isPrime[i] = false;
            }
        }
    }
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            cout << i << ' ';
        }
    }
}

// optimized 
void opt_sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            cout << i << ' '; 
            for (int j = i * i; j <= n; j = j + i) {
                isPrime[i] = false;
            }
        }
    }
}

int main() {
    int number = 20; 
    opt_sieve(number); 
}