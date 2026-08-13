class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> adds;
        for(int i = 0; i < n; ++i){
            int diff = target - nums[i];
            if(adds.find(diff) != adds.end()) {
                return {adds[diff], i};
            }
            adds.insert({nums[i], i});
        }
        return {};
    }
};
