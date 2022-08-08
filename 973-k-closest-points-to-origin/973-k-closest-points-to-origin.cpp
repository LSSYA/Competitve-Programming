class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
    priority_queue<pair<int, int>> prior;
        
    int i=0;
    for(auto it:points) {
        int x = it[0]*it[0] + it[1]*it[1];
        prior.push({x, i});
        if(prior.size() > k) prior.pop();
        i++;
    }
        
    vector<vector<int>> res;
    while(!prior.empty()) {
        int i = prior.top().second;
        res.push_back({points[i][0], points[i][1]});
        prior.pop();
    }
    return res;
    }
};