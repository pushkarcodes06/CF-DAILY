#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;

    // Vector to store pairs of (dragon_strength, bonus)
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Sort dragons in ascending order based on their strength (first element)
    sort(dragons.begin(), dragons.end());

    // Simulate the battles
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].first) {
            s += dragons[i].second; // Defeat the dragon and gain bonus strength
        } else {
            cout << "NO\n";        // Kirito is not strong enough
            return 0;
        }
    }

    // If he successfully defeats all dragons
    cout << "YES\n";
    return 0;
}
