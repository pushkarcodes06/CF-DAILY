#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--) {
        int x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}
