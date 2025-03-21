class Solution {
public:
    int rob(vector<int>& nums) {
        // 도둑이 선택할 것.
        //1. 내집을 털경우 + 내가 턴 전집.
        //2. 내집을 털지 않을경우 + 내가 여태까지 털었던 집.

        if( nums.size() == 1)
            return nums[0];
        if( nums.size() == 2)
            return nums[0] > nums[1] ? nums[0] : nums[1];

        std::vector<int> dp( nums.size() );
        dp[0] = nums[0];
        dp[1] = std::max( nums[0], nums[1] );
        for( int i = 2; i < nums.size(); i++ ) {
            dp[i] = std::max( nums[i] + dp[i - 2], dp[i - 1] );
        }

        return dp[nums.size() - 1] > dp[nums.size() - 2] ? dp[nums.size() - 1] : dp[nums.size() - 2];
    }
};