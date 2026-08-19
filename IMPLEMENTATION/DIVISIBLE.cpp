#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, x;
    cin >> a >> b >> x;

    // Find the first multiple of x >= a
    long long first = ((a + x - 1) / x) * x;

    // Find the last multiple of x <= b
    long long last = (b / x) * x;

    // If no such multiples exist in the range [a, b]
    if (first > last || first > b || last < a) {
        cout << 0 << "\n";
        return 0;
    }

    // Number of multiples in the range
    long long n = (last - first) / x + 1;

    // Calculate sum using the AP formula
    long long sum = n * (first + last) / 2;

    cout << sum << "\n";

    return 0;
}

