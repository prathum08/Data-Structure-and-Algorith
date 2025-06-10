class Solution {
public:
    int beautySum(string s) {
      int n = s.length();
      int result = 0;

      for(int i = 0 ; i < n ; i++){
        vector<int> counter(26 , 0);
        for(int j = i ; j < n ; j++){
            counter[s[j] - 'a']++;
            int mini = INT_MAX;
            int maxi = 0;

            for(int k = 0 ; k < 26 ; k++){
                maxi = max(maxi , counter[k]);
                if(counter[k] != 0){
                    mini = min(mini , counter[k]);
                }
            }

            result = result + (maxi - mini);
        }
      }  

      return result;
        
    }
};