class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, int> mpp;

        for (auto num : arr) {
            mpp[num]++;
        }

        for (auto it1 = mpp.begin(); it1 != mpp.end(); ++it1) {
            auto it2 = it1;
            ++it2;
            for (; it2 != mpp.end(); ++it2) {
                if (it1->second == it2->second) {
                    return false;
                }
            }
        }

        return true;
    }
};