class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
    
            vector<int>& lastAddedInterval = result.back();

            if (lastAddedInterval[1] >= intervals[i][0]) {
                lastAddedInterval[1] = max(lastAddedInterval[1], intervals[i][1]);
            } else {
                
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};