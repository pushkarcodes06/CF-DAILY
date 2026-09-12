class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n=nums.size();
        n = n*(n-1)/2;
        vector<int> pairs[n];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            pairs[i] = __gcd(nums[i],nums[j]);}
        }

        sort(pairs.begin(),pairs.end());

        vector<int> ans[n];
        for(int i=0;i<n;i++){
            ans[i]=pairs[[queries[i]]];
        }

        return ans;
    }
};
