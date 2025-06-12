class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        
        int i = 0 , j = 0;
        int mini = INT_MAX;
        int sum = 0;
        while(j < n){
            sum = sum + nums[j];

            while(sum >= target){
                sum = sum - nums[i];
                mini = min(j - i + 1 , mini);
                i++;
            }
            j++;
        }

        if(mini == INT_MAX){
            return 0;
        }
        else{
            return mini;
        }
        
    }
};