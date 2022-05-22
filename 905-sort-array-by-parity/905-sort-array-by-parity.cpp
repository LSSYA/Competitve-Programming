class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(j < nums.size() && nums[i] % 2)
                {
                swap(nums[i],nums[j]);
                } 
            }

        }
    return nums;
    }
};