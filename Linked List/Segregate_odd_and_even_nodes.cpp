/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        // This the Brute Force Approach:-
        if(head == NULL){
            return head;
        }

        vector<int> store;
        ListNode* temp = head;

        // Putting the odd elements
        while(temp != NULL && temp -> next != NULL){
            store.push_back(temp -> val);
            temp = temp -> next -> next;
        }
        // last element data is not appended
        if(temp){
            store.push_back(temp -> val);
        }

        temp = head -> next;

        while(temp != NULL && temp -> next != NULL){
            store.push_back(temp -> val);
            temp = temp -> next -> next;
        }

        if(temp){
            store.push_back(temp -> val);
        }

        int i = 0;
        temp = head;

        while(temp != NULL){
            temp -> val = store[i];
            i++;
            temp = temp -> next;
        }


        return head;


        //Approach 2 :-
        ListNode* odd = head;
        ListNode* even = head -> next;
        //For Even Linkage:-
        ListNode* evenHead = head -> next;

        while(even != NULL && even -> next != NULL){
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = even -> next -> next;
            even = even -> next;
        }

        odd -> next = evenHead;
        return head;


    }
};