#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    long long dx = x2 - x1;
    long long dy = y2 - y1;

    // Calculate distance using long double for high precision
    long double distance = sqrt((dx * dx) + (dy * dy));

    // Print with high precision
    cout << fixed << setprecision(9) << distance << "\n";

    return 0;
}
