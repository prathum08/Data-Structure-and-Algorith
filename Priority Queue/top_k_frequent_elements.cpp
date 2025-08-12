//Leetcode :- 347
class Solution {
public:
    typedef pair<int ,int> P;
    struct lambda{
        bool operator()(P &p1 , P &p2){
            return p1.second < p2.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<P , vector<P> , lambda> pq;
        // for storing the frequency
        unordered_map<int , int> mpp;

        for(auto &num : nums){
            mpp[num]++;
        }

        // values from map to heap
        for(auto &it : mpp){
            pq.push({it.first , it.second});
        }

        vector<int> res;
        int count = 0;
        while(count < k){
            res.push_back(pq.top().first);
            pq.pop();
            count++;
        }

        return res;

    }
};