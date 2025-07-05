class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int> mpp;
        int luckyNum = -1;
        for(auto num : arr){
            mpp[num]++;
        }

        for(auto it : mpp){
            if(it.first == it.second){
                luckyNum = max(luckyNum , it.first);
            }
        }

        return luckyNum;
        
    }
};