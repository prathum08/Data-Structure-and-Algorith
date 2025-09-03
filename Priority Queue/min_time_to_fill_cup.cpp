class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        for (auto& a : amount) {
            if (a > 0) {
                pq.push(a);
            }
        }
        int cnt = 0;
        while (!pq.empty()) {
            int first = pq.top() - 1;
            pq.pop();
            int sec = 0;
            if (!pq.empty()) {
                sec = pq.top() - 1;
                pq.pop();
            }

            if (first > 0) {
                pq.push(first);
            }
            if (sec > 0) {
                pq.push(sec);
            }

            cnt++;
        }

        return cnt;
    }
};