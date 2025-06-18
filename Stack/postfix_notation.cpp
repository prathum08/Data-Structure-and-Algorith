class Solution {
public:
    int converter(int a, int b, string token) {
        if (token == "+")
            return a + b;
        if (token == "-")
            return a - b;
        if (token == "*")
            return a * b;
        if (token == "/")
            return a / b;
        return 0; //
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string& i : tokens) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int result = converter(b, a, i);
                st.push(result);
            } else {
                st.push(stoi(i));
            }
        }

        return st.top();
    }
};