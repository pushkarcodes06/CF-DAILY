#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    if (!(cin >> m)) return 0;

    vector<int> A(m);
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i].first;
        B[i].second = i;
    }

    sort(A.rbegin(), A.rend());
    sort(B.begin(), B.end());

    vector<int> A_prime(m);
    for (int i = 0; i < m; i++) {
        A_prime[B[i].second] = A[i];
    }

    for (int i = 0; i < m; i++) {
        cout << A_prime[i] << (i == m - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
