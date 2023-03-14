class Solution {
public:
    int rec(vector<int> &nums,int i,int j,vector<vector<int>> &dp)
    {
        
        if(i > j) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int an1 = nums[i] + min(rec(nums,i+1,j-1,dp),rec(nums,i+2,j,dp));
        
        int an2 = nums[j] + min(rec(nums,i+1,j-1,dp),rec(nums,i,j-2,dp));
        
        dp[i][j] = max(an1,an2);
        
        return dp[i][j];
    }
    
    
    bool PredictTheWinner(vector<int>& nums) 
    {
        
        int n = nums.size();
        
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        int ans = rec(nums,0,n-1,dp);
        
        int sum = 0;
        
        for(auto i:nums) sum += i;
        
        return (ans >= sum - ans);
        
    }
};