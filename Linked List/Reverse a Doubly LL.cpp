#include<iostream>
using namespace std;


DLLNode* reverse(DLLNode* head){
    //Checks if the current node is NULL or not
    if(head == NULL || head -> next == NULL){
        return head;
    }
    //create a variable for storing the previous value
    DLLNode* curr = head;
    DLLNode* prev = NULL;

    while(curr != NULL){
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }

    return prev -> prev;

}