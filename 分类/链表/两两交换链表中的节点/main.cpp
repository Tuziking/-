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
    ListNode* p = head;
    ListNode* q = head->next;
    while (q != nullptr)
    {
        p->next = q->next;
        q->next = p;
        p = p->next;
        q = p->next;
    }
    return head;
}

int main(int argc, char const *argv[])
{
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* p = head;
    for (size_t i = 0; i < 3; i++)
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