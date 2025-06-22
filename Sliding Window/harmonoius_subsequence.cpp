class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int maxLen = 0;

        // for(int i = 0 ; i < n ; i++){
        //     int cnt = 0;
        //     for(int j = i ; j < n ; j++){
        //         if(nums[j] - nums[i] == 1){
        //             cnt = j - i + 1;
        //         }
        //         else if(nums[j] - nums[i] > 1){
        //             break;
        //         }
                
        //     }
        //     maxLen = max(maxLen , cnt);
        // }

        // return maxLen;

        //Sliding Window:-
        int l = 0;
        int r = 0;

        while(r < n && l < n){
            if(nums[r]-nums[l] < 1){
                r++;
            }
            else if(nums[r] - nums[l] == 1){
                maxLen = max(maxLen , r - l + 1);
                r++;
            }
            else{
                l++;
            }
        }
        return maxLen;
        
    }
};