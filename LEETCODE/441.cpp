class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((-1 + sqrt(1.0 + 8.0 * (double)n)) / 2);
    }
};
