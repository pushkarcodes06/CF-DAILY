#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    long long min_price = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_price) {
            min_price = a[i];
        }
    }

    long long total_seconds = 0;
    bool possible = true;

    for (int i = 0; i < n; i++) {
        long long diff = a[i] - min_price;
        
        // If the gap cannot be bridged by steps of k, it's impossible
        if (diff % k != 0) {
            possible = false;
            break;
        }
        
        total_seconds += (diff / k);
    }

    if (possible) {
        cout << total_seconds << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
