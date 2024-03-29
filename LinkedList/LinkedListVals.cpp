#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>
#include "string"

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode* next) : val(val), next(next) {}
};

class Solution{
public:
    void printLinkedListIter(ListNode* head){
        ListNode* current = head;
        while(current){
            cout << current->val << endl;
            current = current->next;
        }
    }

    void printLinkedListRec(ListNode* head){
        if(head == nullptr){
            return;
        }

        cout << head->val << endl;
        printLinkedListRec(head->next);
    }
};