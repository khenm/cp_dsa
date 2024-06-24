#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a * b / gcd(a, b)); 
}

int main() {
    int a = 25, b = 20;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b);
    return 0; 
}