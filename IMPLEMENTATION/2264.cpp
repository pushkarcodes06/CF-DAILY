#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int &x : p) cin >> x;

        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
            pos[p[i]] = i;

        bool ok = true;

        // Find mismatched positions
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1)
                v.push_back(i);
        }

        // Selected indices must be symmetric.
        for (int l = 0, r = (int)v.size() - 1; l <= r; l++, r--) {
            int i = v[l];
            int j = v[r];

            if (p[i] != j + 1 || p[j] != i + 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
