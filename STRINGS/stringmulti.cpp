class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        // Multiply each digit from right to left
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10; // Place ones digit
                result[i + j] += sum / 10;     // Add carry to next position
            }
        }

        // Convert result vector to string (skipping leading zeros)
        string ans = "";
        int i = 0;
        while (i < result.size() && result[i] == 0) i++;
        while (i < result.size()) {
            ans.push_back(result[i++] + '0');
        }

        return ans.empty() ? "0" : ans;
    }
};
