//Approach 1:- Brute Force

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n , 0);
        vector<int> right(n , 0);
        left[0] = 1;
        right[n - 1] = 1;
        for(int i = 1 ; i < n ; i++){
            if(ratings[i] > ratings[i - 1]){
                left[i] = left[i - 1] + 1;
            }
            else{
                left[i] = 1;
            }
        }
        for(int i = n - 2 ; i >= 0 ; i--){
            if(ratings[i] > ratings[i + 1]){
                right[i] = right[i + 1] + 1;
            }
            else{
                right[i] = 1;
            }
        }
        int totalChoco = 0;
        for(int i = 0 ; i < n ; i++){
            totalChoco = totalChoco + max(left[i] , right[i]);
        }

        return totalChoco;
        

        
    }
};

//Approach 2 :- Slope Approacch
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int peak;
        int bottom;
        int i = 1;
        int totalChoco = 1;
        while(i < n){
            if(ratings[i] == ratings[i - 1]){
                totalChoco = totalChoco + 1;
                i++;
                continue;
            }
            //checking for the increasing slope
            peak = 0;
            while(i < n && ratings[i] > ratings[i - 1]){
                peak++;
                totalChoco = totalChoco + peak + 1;
                i++;
            }

            //checking for the decreasing slope
            bottom = 0;
            while(i < n && ratings[i] < ratings[i - 1]){
                bottom++;
                totalChoco = totalChoco + bottom + 1;
                i++;
            }
            totalChoco -= min(bottom , peak);
        
        }
        
        return totalChoco;
    }
};