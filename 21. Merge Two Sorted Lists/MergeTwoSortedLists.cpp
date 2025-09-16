#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* p3 = head;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                p3->next = list1;
                list1 = list1->next;
            } else {
                p3->next = list2;
                list2 = list2->next;
            }
            p3 = p3->next;
        }

        if (list1 != nullptr) {
            p3->next = list1;
        } else {
            p3->next = list2;
        }

        return head->next;
    }
};

int main(){

}