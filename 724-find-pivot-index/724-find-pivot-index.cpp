class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {

        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);
        
        for(int i = 1; i <= n; i++) prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        for(int i = 0; i < n; i++) 
        {
            if(prefixSum[i] == prefixSum[n] - prefixSum[i + 1]) return i;
        }
        
        return -1;
        
    }
};