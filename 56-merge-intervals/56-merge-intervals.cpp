class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    vector<vector<int>> result;
        
    sort(intervals.begin(), intervals.end());
        
    int x = intervals[0][0], y = intervals[0][1];
    for(auto it:intervals) {
        if(it[0] <= y) {
            y = max(y, it[1]);
        } else {
            result.push_back({x, y});
            x = it[0];
            y = it[1];
        }
    }
        
    result.push_back({x, y});
    return result;
}
};