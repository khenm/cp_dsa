#include <bits/stdc++.h>
#include "prime_number.cpp"
using namespace std;

// naive solution
// time complexity: O(nsqrt(n)logn)
void prime_factors(int n) {
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            int x = i;
            while (n % x == 0) {
                cout << i << " ";
                x = x * i; 
            }
        }
    }
}

// efficient solution
// time: O(sqrt(n))
void efficient_prime_factors(int n) {
    if (n <= 0)
        return; 
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i; 
        }
    }
    if (n > 1)
        cout << n;
}

// more efficient solution
void more_efficient_prime_factors(int n) {
    if (n <= 1)
        return;
    while (n % 2 == 0) {
        cout << 2 << ' ';
        n = n / 2;
    }
    while (n % 3 == 0) {
        cout << 3 << ' ';
        n = n / 3;
    }
    for (int i = 5; i * i < n; i = i + 6) {
        while (n % i == 0) {
            cout << i << ' ';
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            cout << i + 2 << ' ';
            n = n / (i + 2);
        }
    }
    if (n > 1)
        cout << n;
}

int main() {
    int x = 125;
    more_efficient_prime_factors(x); 
}