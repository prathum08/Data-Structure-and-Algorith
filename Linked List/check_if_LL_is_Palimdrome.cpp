
// Approach 1:-

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }

        vector<int> result;

        ListNode* curr = head;

        while(curr != NULL){
            result.push_back(curr -> val);
            curr = curr -> next;
        }

        int i = 0;
        int j = result.size() - 1;

        while(i <= j){
            if(result[i] != result[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};


// Approach 2 :- Recurrsion

class Solution {
public:
    ListNode* curr;
    bool check(ListNode* head){
        if(head == NULL){
            return true;
        }
        bool result = check(head -> next);
        if(head -> val != curr -> val){
            return false;
        }

        curr = curr -> next;

        return result;
    }
    bool isPalindrome(ListNode* head) {
        curr = head;
        return check(head);
        
    }
};