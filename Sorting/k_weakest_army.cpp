class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        vector<pair<int , int>> res;
        for(int i = 0 ; i < n ; i++){
            int count = 0;
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 1){
                    count++;
                }
                else{
                    //breaking because the soldiers are present in the front
                    break;
                }
            }

            res.push_back({count , i});
        }

        sort(res.begin() , res.end() , [](auto &a , auto &b){
            if(a.first != b.first){
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        vector<int> ans;

        for(int i = 0 ; i < k ; i++){
            ans.push_back(res[i].second);
        }

        return ans;
    }
};