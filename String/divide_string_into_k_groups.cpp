class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string> res;

        for(int i = 0 ; i < n ; i = i + k){
            string str = "";
            int j = i; /// 
            int cnt = 0;

            int a = k
            while(j < n && cnt < k){
                str = str + s[j];
                j++;
                cnt++;
            }

            while(str.length() < k){
                str = str + fill;
            }

            res.push_back(str);
        }

        return res;


    }
};