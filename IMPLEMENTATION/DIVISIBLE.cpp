#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, x;
    if (!(cin >> a >> b >> x)) return 0;

    // Find the first multiple >= a safely
    long long first;
    if (a >= 0) {
        first = ((a + x - 1) / x) * x;
    } else {
        first = (a / x) * x;
    }

    // Find the last multiple <= b safely
    long long last;
    if (b >= 0) {
        last = (b / x) * x;
    } else {
        last = ((b - x + 1) / x) * x;
    }

    // If no multiples exist in the valid range
    if (first > last || first > b || last < a) {
        cout << 0 << "\n";
        return 0;
    }

    // Calculate number of terms
    long long n = (last - first) / x + 1;

    // Use __int128 to prevent overflow during multiplication
    __int128 total_sum = (__int128)n * (first + last) / 2;

    // Convert __int128 back to standard type for printing
    // Note: If the final answer itself exceeds long long, 
    // you must print it digit by digit or use a modulo if required by the problem.
    long long final_ans = (long long)total_sum;
    cout << final_ans << "\n";

    return 0;
}

