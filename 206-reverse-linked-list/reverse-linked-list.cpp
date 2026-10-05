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
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        reverse(arr.begin(),arr.end());
        ListNode* newHead = new ListNode(arr[0]);
        curr=newHead;
       for (int i=1; i<arr.size();i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
     return newHead;
        // ListNode* prev = nullptr;   
        // ListNode* curr = head;    
        // while (curr) {
        //     ListNode* next = curr->next; // store next node
        //     curr->next = prev;           // reverse pointer
        //     prev = curr;                 // move prev forward
        //     curr = next;                 // move curr forward
        // }
        // return prev; // new head of reversed list
    }
};