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
    bool hasCycle(ListNode* head) {
        ListNode* brz = head;
        ListNode* spori = head;
        while(brz && brz->next){
            spori = spori->next;
            brz = brz->next->next;
            if(spori == brz) return true;
        }
        return false;
    }
};
