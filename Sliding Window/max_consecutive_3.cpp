class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int cntZero = 0;
        int maxLen = 0;


        while(r < n){
            if(nums[r] == 0){
                cntZero++;
            }
            while(cntZero > k){
                if(nums[l] == 0){
                    cntZero--;
                }
                l++;
            }
            maxLen = max(maxLen , r - l + 1);
            r++;
        }

        return maxLen;
    }
};