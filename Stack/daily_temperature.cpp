class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //Monotonic Stack
        int n = temperatures.size();
        stack<int> st;
        vector<int> res(n , 0);

        //Backward Traversal to check whether greater temp is present or not
        for(int i = n - 1 ; i >= 0 ; i--){
            //poping out the element if it is less the the current element
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                res[i] = 0;
            }
            else{
                res[i] = st.top() - i;
            }

            st.push(i);
        }

        return res;

        
    }
};