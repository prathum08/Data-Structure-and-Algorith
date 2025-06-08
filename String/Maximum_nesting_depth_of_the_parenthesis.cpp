class Solution {
public:
    int maxDepth(string s) {
        // normal brute force approach
       int count = 0;
       int maxi = 0;
       int n = s.length();

       for(int i = 0 ; i < n ; i++){
        if(s[i] == '('){
            count++;
            maxi = max(maxi , count);
        }
        else if(s[i] == ')'){
            count--;
        }
       }

       return maxi; 


        
    }
};

//Leetcode 1614
//date : - 08/06/25