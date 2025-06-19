class Solution {
public:
    string simplifyPath(string path) {
        //Tokenizing the path using string stream

        stringstream ss(path);
        //In this the token will be stored
        string token = "";
        stack<string> st;

        while(getline(ss ,token , '/')){
            if(token == "" || token == "."){
                continue;
            }
            else if(token != ".."){
                st.push(token);
            }
            else if(!st.empty()){
                st.pop();
            }
        }

        if(st.empty()){
            return "/";
        }
        string res = "";
        while(!st.empty()){
            res = '/' + st.top() + res;
            st.pop();
        }

        return res;
        
    }
};