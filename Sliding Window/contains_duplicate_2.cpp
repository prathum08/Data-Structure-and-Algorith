class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        // Brute Force Approach
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i + 1 ; j < n ; j++){
        //         if(nums[i] == nums[j] && abs(i - j) <= k){
        //             return true;
        //         }
        //     }
        // }

        // return false;


        // Approach 2 ( sliding Window)
        unordered_set<int> mpp;

        for(int i = 0 ; i < n ; i++){
            if(mpp.count(nums[i])){
                return true;
            }
            mpp.insert(nums[i]);
            
            if(mpp.size() > k){
                mpp.erase(nums[i - k]);
            }
        }

        return false;
        
    }
};