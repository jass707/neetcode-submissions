class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);

        int pre = 1;
        int suf = 1;

        // Prefix products
        for (int i = 0; i < n; i++) {
            prefix[i] = pre;
            pre *= nums[i];
        }

        // Suffix products
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suf;
            suf *= nums[i];
        }

        // Combine prefix and suffix
        for (int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};