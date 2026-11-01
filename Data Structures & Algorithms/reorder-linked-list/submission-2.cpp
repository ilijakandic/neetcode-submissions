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
    void reorderList(ListNode* head) {
        ListNode* spori = head;
        ListNode* brzi = head->next;
        while(brzi && brzi->next){
            spori = spori->next;
            brzi = brzi->next->next;
        }

        ListNode* druga = spori->next;
        spori->next = nullptr;
        //obrtanje
        ListNode* prev = nullptr;
        while(druga){
            ListNode* sled = druga->next;
            druga->next = prev;
            prev = druga;
            druga = sled;

        }
        druga = prev;
        ListNode* prva = head;
        while(druga){
            ListNode* t1 = prva->next;
            ListNode* t2 = druga->next;
            prva->next = druga;
            druga->next = t1;
            prva = t1;
            druga = t2;
        }
        return;
    }
};
