class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> overlap;
        overlap.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++){
            if(overlap.back()[1]>=intervals[i][0]){
                overlap.back()[1]=max(overlap.back()[1],intervals[i][1]);
            }else{
                overlap.push_back(intervals[i]);
            }
        }
        return overlap;
    }
};
