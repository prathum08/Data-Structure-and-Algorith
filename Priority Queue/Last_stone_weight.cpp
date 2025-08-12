//Leetcode :- 1046 
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int , vector<int>> pq;
        
        for(auto num : stones){
            pq.push(num);
        }

        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a != b){
                pq.push(abs(a - b));
            }
        }

        if(pq.empty()){
            return 0;
        }
        else{
            return pq.top();
        }
    }
};