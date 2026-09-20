
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        long long sum = 0;
        int ans = 0;
        priority_queue<long long> pq;

        for (int i = m; i >= 2; i--) {
            sum += a[i];
            pq.push(a[i]);

            if (sum > 0) {
                long long x = pq.top();
                pq.pop();

                sum -= 2 * x;
                ans++;
            }
        }

        sum = 0;

        priority_queue<long long> pq2;

        for (int i = m + 1; i <= n; i++) {
            sum += a[i];
            pq2.push(-a[i]);

            if (sum < 0) {
                long long x = pq2.top();
                pq2.pop();

                sum += 2 * x;
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
