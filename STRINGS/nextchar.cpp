#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char x;
    cin >> x;

    // Handle wrap-around for 'z' and 'Z'
    if (x == 'z') {
        cout << 'a';
    } else if (x == 'Z') {
        cout << 'A';
    } else {
        // Safe to just print the next character directly
        cout << (char)(x + 1);
    }

    return 0;
}
