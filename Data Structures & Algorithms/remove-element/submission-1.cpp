class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int head = 0;
        int tail = nums.size();
        while(head < tail){
            if(nums[head] == val){
                nums[head] = nums[tail-1];
                --tail;
            } else {
                ++head;
            }
        }
        return tail;
    }
};