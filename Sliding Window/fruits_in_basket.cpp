class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0;
        int r = 0;
        unordered_map<int ,int> basket;
        int maxLength = 0;

        while(r < n){
            basket[fruits[r]]++;

            while(basket.size() > 2){
                basket[fruits[l]]--;
                if(basket[fruits[l]] == 0){
                    basket.erase(fruits[l]);
                }
                l++;
            }
            maxLength = max(maxLength , r - l + 1);
            r++;
        }

        return maxLength;
        
    }
}