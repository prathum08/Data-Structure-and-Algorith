class Solution {
public:

    bool allZeroes(vector<int> &num){
        for(auto &a : num){
            if(a != 0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        vector<int> vec(26 , 0);

        for(int i = 0 ; i < m ; i++){
            vec[p[i] - 'a']++;
        }

        //Slinding window
        int i = 0 , j = 0;
        vector<int> result;

        while(j < n){
            vec[s[j] - 'a']--;

            if(j - i + 1 == m){
                if(allZeroes(vec)){
                    result.push_back(i);
                }
                vec[s[i] - 'a']++;
                i++;
            }

            j++;
        }
        
        return result;
    }
};