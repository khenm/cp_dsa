#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Solution {
public:
    pair<ll, ll> get_min_max(ll arr[], ll n) {
        int min = arr[0];
        int max = arr[0];
        if (n == 1)
            return make_pair(min, max);
        for (int i = 0; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        return make_pair(min, max); 
    }
};



int main() {
    ll arr[] = {3, 2, 1, 56, 10000, 167};
    Solution solution; 
    pair<ll, ll> pair_min_max = solution.get_min_max(arr, 6);
    cout << pair_min_max.first << " " << pair_min_max.second << endl; 
}