#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int digitsInFactorial(int N)
    {
        // code here
        int len = 0; 
        long long result = 1;
        for (int i = 1; i <= N; i++) {
            result *= i;
            while (result % 10 == 0) {
                result /= 10;
                len += 1;
            }
        }

        cout << result << endl;

        return len; 
    }
};

int main() {
    Solution solution;
    int len = solution.digitsInFactorial(10);
    cout << len; 
}