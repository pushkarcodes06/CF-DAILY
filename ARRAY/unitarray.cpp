#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 1) pos++;
        else neg++;
    }
    
    int ans = 0;
    while (neg > pos) {
        neg--;
        pos++;
        ans++;
    }
    
    if (neg % 2 != 0) {
        ans++;
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
