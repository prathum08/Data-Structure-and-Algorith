class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //Brute Force
        int n = nums.size();
        // double maxAvg = INT_MIN;

        // for(int i = 0 ; i <= n - k ; i++){
        //     double sum = 0;
        //     for(int j = i ; j < i + k ; j++){
        //         sum = sum + nums[j];
        //     }
        //     maxAvg = max(maxAvg , sum / k);
        // }

        // return maxAvg;
        

        //Sliding Window
        double sum = 0;

        for(int i = 0 ; i < k ; i++){
            sum = sum + nums[i];
        }
        double maxAvg = sum / k;

        for(int i = k ; i < n ;i++){
            sum = sum + nums[i] - nums[i - k];
            maxAvg = max(maxAvg , sum / k);
        }

        return maxAvg;
    }
};