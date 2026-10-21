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
    ListNode* deleteDuplicates(ListNode* head) {
     while (head != NULL && head->next != NULL &&
               head->val == head->next->val) {
            int x = head->val;
            while (head != NULL && head->val == x) {
                head = head->next;
            }
        }
        if (head == NULL) return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr != NULL) {
            if (curr->next != NULL &&
                curr->val == curr->next->val) {
                int x = curr->val;
                while (curr != NULL && curr->val == x) {
                    curr = curr->next;
                }
                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};