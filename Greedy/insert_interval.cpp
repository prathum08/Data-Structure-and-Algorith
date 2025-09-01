class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> res;

        //checking for the left part which is less than the new interval
        while(i < n && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }

        // finding the new inteval and storing the newvalues
        // taking minimum of all for the new interval starting
        //taking maximum of all for the new inteval ending
        while(i < n && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0] , intervals[i][0]);
            newInterval[1] = max(newInterval[1] , intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);

        //right side which is greater than the new interval
        while(i < n){
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};