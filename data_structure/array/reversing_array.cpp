#include <bits/stdc++.h>
using namespace std;

// this solution is the most efficient 
class Solution {
public:
    string reverseWord(string str) {
        int size = str.length(); 
        for (int i = 0; i < size / 2; i++) {
            swap(str[i], str[size - i - 1]);
        }
        return str; 
    }
};

int main() {
    string str = "Donkihote";
    Solution solution; 
    cout << solution.reverseWord(str); 
}