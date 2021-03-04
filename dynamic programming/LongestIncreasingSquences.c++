// 300
// 考虑状态转移方程
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        vector<int> dp(len, 1); //base case
        for(int i = 0;i<len;i++){
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i])
                    dp[i] =max(dp[i], dp[j] + 1);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};