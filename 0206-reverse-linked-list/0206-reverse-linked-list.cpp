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
    private:
     void InsertatBeg(ListNode*& head, int val) {  
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newhead = nullptr;
        
        while (head != nullptr) {
            InsertatBeg(newhead, head->val);  
            head = head->next;
        }
        
        return newhead;
    }
};