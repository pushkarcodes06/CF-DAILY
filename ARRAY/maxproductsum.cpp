#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to keep track of B's original positions
struct Element {
    int value;
    int index;
};

// Comparator to sort B in ascending order
bool compareB(const Element& a, const Element& b) {
    return a.value < b.value;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    if (!(cin >> m)) return 0;

    vector<int> A(m);
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    vector<Element> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i].value;
        B[i].index = i;
    }

    // Sort A in descending order
    sort(A.rbegin(), A.rend());

    // Sort B in ascending order
    sort(B.begin(), B.end(), compareB);

    // Reconstruct the rearranged array A'
    vector<int> A_prime(m);
    for (int i = 0; i < m; i++) {
        A_prime[B[i].index] = A[i];
    }

    // Print the result
    for (int i = 0; i < m; i++) {
        cout << A_prime[i] << (i == m - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
