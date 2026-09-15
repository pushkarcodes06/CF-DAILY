#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O for handling large inputs within the 2-second time limit
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // Read the number of digits

    string s;
    cin >> s; // Read the entire block of digits as a string

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        // Convert character digit (e.g., '5') to integer (5) by subtracting '0'
        sum += (s[i] - '0'); 
    }

    cout << sum << "\n";

    return 0;
}
