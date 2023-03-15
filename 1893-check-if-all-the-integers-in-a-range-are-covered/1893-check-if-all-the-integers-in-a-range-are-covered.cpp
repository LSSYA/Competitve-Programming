class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) 
    {
        vector<bool> isCovered(right - left + 1, false);
        
        for (auto range : ranges) 
        {
            for (int i = max(range[0], left); i <= min(range[1], right); i++) 
            {
                isCovered[i - left] = true;
            }
        }
        
        for (int i = 0; i <= right - left; i++) 
        {
            if (!isCovered[i]) 
            {
                return false;
            }
        }
        
        return true;
    }
};
