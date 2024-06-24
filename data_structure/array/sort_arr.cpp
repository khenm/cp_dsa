#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bubble sort
    vector<int> sortArr(vector<int>arr, int n) {
        bool swapped = false;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break; 
        }
        return arr; 
    }
};



int main() {
    vector<int> arr = {1, 5, 3, 2};
    Solution solution;
    arr = solution.sortArr(arr, 4);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
}