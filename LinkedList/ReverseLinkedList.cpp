#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>
#include "string"

/*
 * Given the head of a singly linked list,
 * reverse the list, and return the reversed list.
 */

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while(curr){
            ListNode* temp = curr;
            next = curr->next;
            curr->next = prev;
            prev = temp;
        }

        return prev;
    }
};