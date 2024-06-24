#include <bits/stdc++.h>
using namespace std;

// given an array, find all the local maximum
int find_peak(int arr[], int size) {
    if (size == 1)
        cout << arr[size - 1];
    if (arr[0] > arr[1])
        cout << arr[0] << " "; 
    if (arr[size - 1] > arr[size - 2])
        cout << arr[size - 1] << " ";
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            cout << arr[i] << " "; 
        }
    }
    return 1; 
}

int main() {
    int arr[] = {10, 20, 15, 2, 23, 90, 67};
    find_peak(arr, 7);
}