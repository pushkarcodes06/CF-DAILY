#include <iostream>
#include <string>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        // Case 1: Both are '?' -> change both to 'a' for the lexicographically smallest result
        if (s[left] == '?' && s[right] == '?') {
            s[left] = s[right] = 'a';
        } 
        // Case 2: Left side is '?' -> copy the right character
        else if (s[left] == '?') {
            s[left] = s[right];
        } 
        // Case 3: Right side is '?' -> copy the left character
        else if (s[right] == '?') {
            s[right] = s[left];
        } 
        // Case 4: Both are fixed letters but mismatch -> palindrome is impossible
        else if (s[left] != s[right]) {
            cout << -1 << "\n";
            return 0;
        }

        left++;
        right--;
    }

    // Output the resulting lexicographically smallest palindrome
    cout << s << "\n";

    return 0;
}
