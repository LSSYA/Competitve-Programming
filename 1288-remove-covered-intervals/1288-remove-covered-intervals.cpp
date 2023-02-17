class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());

        int count = intervals.size();

        for(int i = 0; i<intervals.size()-1; i++)
        {
            if(intervals[i][0] <= intervals[i+1][0] && intervals[i][1] >= intervals[i+1][1])
            {
                count--;
                swap(intervals[i],intervals[i+1]);   
            }
            else if(intervals[i][0] >= intervals[i+1][0] && intervals[i][1] <= intervals[i+1][1])
            {
                count--;
            }
        }
        return count;
    }
};