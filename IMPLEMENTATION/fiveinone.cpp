#include <bits/stdc++.h>
using namespace std;

int maximum(int a[], int n) {
    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    return max_val;
}

int minimum(int a[], int n) {
    int min_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) {
            min_val = a[i]; // Fixed: Changed 'max' to 'min_val'
        }
    }
    return min_val;
}

int divisors(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }
    return c;
}

int prime(int a[], int n) {
    int pri = 0;
    for (int i = 0; i < n; i++) {
        if (divisors(a[i]) == 2) {
            pri++;
        }
    }
    return pri;
}

bool pal(int n) { // Fixed: Changed return type to bool
    int t = n, rem, sum = 0;
    while (n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return (t == sum);
}

int palindrome(int a[], int n) {
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (pal(a[i])) {
            p++;
        }
    }
    return p;
}

int maxdiv(int a[], int n) {
    int b = a[0]; // Fixed: Added missing semicolon
    for (int i = 1; i < n; i++) {
        int div_ai = divisors(a[i]);
        int div_b = divisors(b);
        
        if (div_ai > div_b) {
            b = a[i];
        } else if (div_ai == div_b) { // Fixed: Changed assignment '=' to equality '=='
            if (a[i] < b) {
                b = a[i];
            }
        }
    }
    return b;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    int a[n];
    for (int i = 0; i < n; i++) { // Fixed: Added missing loop to read array values
        cin >> a[i];
    }
    
    // Fixed: Passed the array 'a' instead of 'a[n]'
    cout << "The maximum number : " << maximum(a, n) << "\n";
    cout << "The minimum number : " << minimum(a, n) << "\n";
    cout << "The number of prime numbers : " << prime(a, n) << "\n";
    cout << "The number of palindrome numbers : " << palindrome(a, n) << "\n";
    cout << "The number that has the maximum number of divisors : " << maxdiv(a, n) << "\n";
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
