#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
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
    int exactly3Divisors(int n)
    {
        //Your code 
        if (n <= 1) return -1; 
        int count = 0; 
        // i must be prime
        for (int i = 2; i * i <= n; i++) {
            if (i > 3) {
                if (i % 2 == 0 || i % 3 == 0 || !more_efficient_primecheck(i)) {
                    continue; 
                } 
            }
            count++;
        }
        return count; 
    }
};

int main() {
    Solution solution;
    solution.exactly3Divisors(627);
}