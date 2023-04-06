class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        long long max_sum = 0;
        
        for(int i=0; i<n/2; i++)
        {
            long long sum = nums[i] + nums[n-i-1];
            max_sum = max(max_sum, sum);
        }
        
        return max_sum;
    }
};
