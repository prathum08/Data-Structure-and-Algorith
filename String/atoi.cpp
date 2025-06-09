class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;
        int n = s.length();

        while(i < n && s[i] == ' '){
            i++;
        }   

        if(i > n){
            return 0;
        }

        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }

        while(i < n){
            if(s[i] >= '0' && s[i] <= '9'){
                result = result * 10 + (s[i] - '0');

                if(result > INT_MAX && sign == -1){
                    return INT_MIN;
                }
                else if(result > INT_MAX && sign == 1){
                    return INT_MAX;
                }
                i++;
            }
            else{
                return result * sign;
            }
        }

        return (result*sign);
    }
};
// Date :- 9 - 6 - 25