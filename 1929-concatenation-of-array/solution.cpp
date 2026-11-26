class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> twiceNums(n * 2);
        for(int i = 0; i < n; i++){
            twiceNums[i] = nums[i];
            twiceNums[i+nums.size()] = nums[i];
        }
        return twiceNums;
    }
};