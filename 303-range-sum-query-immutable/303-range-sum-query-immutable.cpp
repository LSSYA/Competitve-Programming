class NumArray {
public:
    vector<int> nums;
    
    NumArray(vector<int>& nums) 
    {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) 
    {
        if (left == right)
        {
            return nums[left];
        } 
        else
        {
            int mid = (left + right) / 2;
            
            int sumLeft = sumRange(left, mid);
            int sumRight = sumRange(mid+1, right);
            
            return sumLeft + sumRight;
        }
    }
};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */