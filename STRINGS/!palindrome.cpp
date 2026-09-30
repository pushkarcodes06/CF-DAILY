#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();

    // Case 1: Check if all characters are identical
    bool all_same = true;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[0]) {
            all_same = false;
            break;
        }
    }

    if (all_same) {
        cout << 0 << "\n";
        return 0;
    }

    // Case 2: Check if the full string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    if (!is_palindrome) {
        // The whole string is not a palindrome
        cout << n << "\n";
    } else {
        // The string is a palindrome but has different characters
        cout << n - 1 << "\n";
    }

    return 0;
}
