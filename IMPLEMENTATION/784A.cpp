#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        int sum = 0;
        while (t--) {
            string s;
            cin >> s;
            
            if (s == "Tetrahedron") {
                sum += 4;
            } else if (s == "Cube") {
                sum += 6;
            } else if (s == "Octahedron") {
                sum += 8;
            } else if (s == "Dodecahedron") {
                sum += 12;
            } else if (s == "Icosahedron") {
                sum += 20;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
