#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    if(head == nullptr){
        return nullptr;
    }
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* r = dummy;
    ListNode* p = head;
    ListNode* q = head->next;
    while (q != nullptr)
    {
        p->next = q->next;
        q->next = p;
        r->next = q;
        r = p;
        p = p->next;
        if (p == nullptr){
            break;
        }
        q = p->next;
    }
    return dummy->next;
}

int main(int argc, char const *argv[])
{
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* p = head;
    for (size_t i = 0; i < 0; i++)
    {
        cin >> val;
        ListNode* q = new ListNode(val);
        p->next = q;
        p = p->next;
    }
    head = swapPairs(head);
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}