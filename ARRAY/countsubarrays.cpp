#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        long long ans = 0;
        long long len = 1; // current non-decreasing segment length

        for (int i = 1; i < N; i++) {
            if (A[i] >= A[i-1]) {
                len++;
            } else {
                ans += len * (len + 1) / 2;
                len = 1;
            }
        }
        ans += len * (len + 1) / 2; // last segment

        cout << ans << "\n";
    }
    return 0;
}
