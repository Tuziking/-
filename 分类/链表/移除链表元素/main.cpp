#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val){
    ListNode* p = head;
    while (p->next)
    {
        if(p->next->val == val){
            ListNode* q = p->next;
            p->next = p->next->next;
            delete(q);
        }
        p = p->next;
    }
    return head;
}



int main(int argc, char const *argv[])
{
    int n, val;
    cin >> n >> val;
    ListNode *list = new ListNode();
    ListNode *p = list;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ListNode *node = new ListNode(a);
        p->next = node;
        p = p->next;
    }
    removeElements(list,val);
    while (list->next)
    {
        cout << list->next->val << " ";
    }
    
    
    return 0;
}
