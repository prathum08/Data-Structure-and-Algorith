class Solution {
public:
    // dp with memoization
    int pathCost(int i , int j ,vector<vector<int>>& triangle , int n , vector<vector<int>> &dp){
        if(i == n - 1){
            return triangle[i][j];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int down = triangle[i][j] + pathCost(i + 1 , j , triangle , n , dp);
        int diagonal = triangle[i][j] + pathCost(i + 1 , j + 1 , triangle , n , dp);

        return dp[i][j] = min(down , diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n , vector<int> (n , -1));
        // return pathCost(0 , 0 , triangle , n , dp);

        // Tabulation Method:- 
        for(int j = 0 ; j < n ; j++){
            dp[n - 1][j] = triangle[n - 1][j];
        }

        for(int i = n - 2 ; i >= 0 ; i--){
            for(int j = i ; j >= 0 ; j--){
                int down = triangle[i][j] + dp[i + 1][j];
                int diagonal = triangle[i][j] + dp[i + 1][j + 1];
                dp[i][j] = min(down , diagonal);
            }
        }

        // return the starting index it returns the answer
        return dp[0][0];

    }
};