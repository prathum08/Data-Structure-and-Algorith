class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;


        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != '#'){
                st1.push(s[i]);
            }
            else if(s[i] == '#' && st1.empty() != true){
                st1.pop();
            }
        }
        for(int i = 0 ; i < t.length() ; i++){
            if(t[i] != '#'){
                st2.push(t[i]);
            }
            else if(t[i] == '#' && st2.empty() != true){
                st2.pop();
            }
        }
        string ans1 = "";
        string ans2 = "";
        while(!st1.empty()){
            ans1 = ans1 + st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            ans2 = ans2 + st2.top();
            st2.pop();
        }

        if(ans1 == ans2){
            return true;
        }

        return false;
    }
};