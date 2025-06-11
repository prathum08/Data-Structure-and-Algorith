class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int result = 0;
        int currSum = 0;

        unordered_map<int , int> mp;

        mp[0] = 1;

        for(auto &s : nums){
            currSum += s;

            int remSum = currSum - goal;
            if(mp.find(remSum) != mp.end()){
                result += mp[remSum];
            }

            mp[currSum]++;
        }

        return result;
    }
};