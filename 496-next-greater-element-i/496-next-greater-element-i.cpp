// Time complexity - O(n2)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        
        for(int i=0; i<nums1.size(); i++)
        {
            int k = -1;
            
            for(int j = nums2.size() - 1; nums2[j] != nums1[i] && j>=0; j--)
            {
                if(nums2[j] > nums1[i])
                {
                    k = nums2[j];
                }
            }
            
            ans.push_back(k);
        }
        
        return ans;
    }
};
