class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        int n = asteroids.size();
        stack<int> st;

        for (auto& rocks : asteroids) {
            if (rocks > 0 || st.empty()) {
                st.push(rocks);
            } else {
                while (!st.empty() && st.top() > 0 && abs(rocks) > st.top()) {
                    st.pop();
                }
                if (!st.empty() && st.top() == abs(rocks)) {
                    st.pop();
                } else {
                    if (st.empty() || st.top() < 0) {
                        st.push(rocks);
                    }
                }
            }
        }

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin() , res.end());

        return res;
    }
};