#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Using double avoids precision loss during division
void printAverage(const vector<double>& a, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double avg = sum / n;
    
    // Prints exactly 6 digits after the decimal point
    cout << fixed << setprecision(6) << avg << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Using vector instead of Variable-Length Array for standard compliance
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    printAverage(a, n);

    return 0;
}
