#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>
#include "string"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int val) : val(val), next(nullptr) {}

    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

class Solution {
public:

    //Iteratively
    int maxElementIt(ListNode *head) {
        int m = INT_MIN;

        while (head) {
            m = max(m, head->val);
            head = head->next;
        }

        return m;
    }

    //Recursively
    int maxElementRec(ListNode *head) {
        if (!head) {
            return INT_MIN;
        }
        int m = maxElementRec(head->next);
        if (m > head->val) {
            return m;
        } else {
            return head->val;
        }
    }
};