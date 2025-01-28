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
        set<int>uniqval;
        ListNode* temp=head;
        while(temp!=nullptr){
            uniqval.insert(temp->val);
            temp=temp->next;
        }
        ListNode* newhead=nullptr;
        ListNode* curr=nullptr;
        for(int val : uniqval){
            ListNode* newnode=new ListNode(val);
            if(newhead==nullptr){
                newhead=newnode;
                curr=newhead;
            }
            else{
            curr->next=newnode;
            curr=curr->next;
            }
        }
        return newhead;
    }
};