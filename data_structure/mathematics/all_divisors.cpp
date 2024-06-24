#include <bits/stdc++.h>
using namespace std;

// naive
void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << ' '; 
    }
}

// efficient
void e_printDivisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << ' ';
            if (i != n / i) {
                cout << n / i << ' '; 
            }
        }
    }
}

void better_print(int n) {
    int i;
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << ' '; 
        }
    }
    for (; i >= 1; i--) {
        if (n % i == 0) {
            cout << n / i << ' ';
        }
    }
}

int main() {
    int x = 30;
    better_print(x); 
}