// Memoization:-
class Solution {
  public:
  
    int checkKnap(int W, vector<int> &val, vector<int> &wt , int n ,  vector<vector<int>> &dp ){
        if(n == 0 || W == 0){
            return 0;
        }
        if(dp[n][W] != -1){
            return dp[n][W];
        }
        if(wt[n -1] <= W){
            return dp[n][W] = max(val[n - 1] + checkKnap(W - wt[n - 1] , val , wt , n - 1 , dp) , checkKnap(W , val , wt , n - 1 , dp));
            
        } 
        else if(wt[n - 1] > W){
            return dp[n][W] = checkKnap(W , val , wt , n - 1 , dp);
        }
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n + 1 , vector<int>(W + 1 , -1));
        return checkKnap(W , val , wt , n , dp);
    }
};

// TopDown Approach
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n + 1 ,vector<int>(W + 1));
        
        for(int i = 0 ; i < n + 1 ; i++){
            for(int j = 0 ; j <  W + 1 ; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else{
                    if(wt[i - 1] <= j){
                        dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]] , dp[i -1][j]);
                    }
                    else if(wt[i -1] > j){
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }   
        }
        
        return dp[n][W];
        
    }
};
