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
        // Ako je lista prazna ILI ima samo jedan element, vrati head
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *last_next = nullptr;
        ListNode *last = head;
        ListNode *sl = head->next;

        while (sl->next) {
            last->next = last_next;

            last_next = last;
            last = sl;
            sl = sl->next;
        }

        // Povezivanje preostala dva čvora nakon izlaska iz petlje
        last->next = last_next;
        sl->next = last;

        return sl;
    }
};
