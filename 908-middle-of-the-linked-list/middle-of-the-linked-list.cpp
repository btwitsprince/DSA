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
    ListNode* middleNode(ListNode* head) {
        int count =0;
        ListNode* curr = head;
        ListNode* curr2 =head;
        while(curr != nullptr){
            curr = curr->next;
            count++;
        }
        int mid = count / 2;
        int count2 = 0;
        for(int i=0; i<mid; i++){
            curr2 = curr2->next;
        }
        return curr2;
    }
};