#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int32_t main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (cin >> n >> k) {
        int min_val = INT_MAX;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            // Track the minimum in the current group
            min_val = min(min_val, x);
            count++;

            // Print and reset if we reach group size K OR the end of the array
            if (count == k || i == n - 1) {
                cout << min_val << " ";
                min_val = INT_MAX;
                count = 0;
            }
        }
        cout << "\n";
    }

    return 0;
}
