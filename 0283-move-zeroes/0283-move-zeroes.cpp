class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Tracks the position of the next zero/available slot
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};