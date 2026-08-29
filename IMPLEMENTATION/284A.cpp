#include <bits/stdc++.h>
using namespace std;

#define int long long

// Corrected Binary Exponentiation
int binpow(int a, int b, int mod) {
    int ans = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) { // FIXED: Multiply when the bit is odd
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return ans;
}

// O(sqrt(N)) function to calculate Euler's Totient Function (Phi)
int get_phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    // If you are looking for primitive roots of a prime n:
    // The total number of primitive roots is phi(phi(n)) -> phi(n - 1)
    if (n <= 1) {
        cout << 0 << "\n";
        return 0;
    }
    
    cout << get_phi(n - 1) << "\n";

    return 0;
}
