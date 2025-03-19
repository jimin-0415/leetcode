class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // * ** * * ** * 계단은 1칸 or 2칸을 올라갈 수 있다.
        // 탐색 비용을 최소화 하는게 중요. DP
        if( cost.size() == 1 )
            return cost[0];
        else if( cost.size() == 2 )
            return cost[1] < cost[0] ? cost[1] : cost[0];

        vector<int> dp( cost.size() );
        dp[0] = cost[0];
        dp[1] = cost[1];

        for( int i = 2; i < cost.size(); i++) 
        {
            if( dp[i-1] < dp[i-2] )
                dp[i] = cost[i] + dp[i-1];
            else
                dp[i] = cost[i] + dp[i-2];
        }
        
        return dp[ cost.size() - 1 ] < dp[ cost.size() - 2 ] ? dp[ cost.size() - 1 ] : dp[ cost.size() - 2 ];
    }
};