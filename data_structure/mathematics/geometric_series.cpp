#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        double power = double(B) / A;
        return A * pow(power, N - 1); 
    }
};


int main() {
    Solution solution;
    solution.termOfGP(4, 6, 5); 
}