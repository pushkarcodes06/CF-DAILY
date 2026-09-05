#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

// Function to count the number of divisors
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_num = a[0];
    int min_num = a[0];
    int prime_count = 0;
    int palindrome_count = 0;
    
    int max_divisors = -1;
    int max_div_num = -1;
    
    for (int i = 0; i < n; i++) {
        // Track maximum and minimum
        if (a[i] > max_num) max_num = a[i];
        if (a[i] < min_num) min_num = a[i];
        
        // Track primes and palindromes
        if (isPrime(a[i])) prime_count++;
        if (isPalindrome(a[i])) palindrome_count++;
        
        // Track number with maximum divisors
        int divs = countDivisors(a[i]);
        if (divs > max_divisors) {
            max_divisors = divs;
            max_div_num = a[i];
        } else if (divs == max_divisors) {
            // Tiebreaker: If numbers have the same number of divisors, choose the larger number
            if (a[i] > max_div_num) {
                max_div_num = a[i];
            }
        }
    }
    
    // Output strictly matching the requested format
    cout << "The maximum number : " << max_num << "\n";
    cout << "The minimum number : " << min_num << "\n";
    cout << "The number of prime numbers : " << prime_count << "\n";
    cout << "The number of palindrome numbers : " << palindrome_count << "\n";
    cout << "The number that has the maximum number of divisors : " << max_div_num << "\n";
    
    return 0;
}
