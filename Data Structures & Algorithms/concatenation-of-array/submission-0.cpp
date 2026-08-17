class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        int h = 0;
        int h2 = n;
        while(h2 < (ans.size())) {
            ans[h] = nums[h];
            ans[h2] = nums[h];
            ++h;
            ++h2;
        }
        return ans;
    }
};