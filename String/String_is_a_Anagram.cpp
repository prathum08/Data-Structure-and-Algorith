class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<int> result(26 , 0);
        for(int i = 0 ; i < n ; i++){
          result[sentence[i] - 'a']++;  
        }

        for(int i = 0 ; i < 26 ; i++){
            if(result[i] == 0){
                return false;
            }
        }

        return true;
    }
};