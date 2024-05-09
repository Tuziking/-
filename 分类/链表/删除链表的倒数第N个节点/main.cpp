#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode();
    ListNode* p,*q;
    dummy->next = head;
    p = dummy;
    q = dummy;
    for(int i = 0; i < n; i++ ){
        q = q->next;
    }
    while(q->next != nullptr){
        p = p->next;
        q = q->next;
    }
    p->next = p->next->next;
    return dummy->next;
}

int main(int argc, char const *argv[])
{
    int n,m;
    n = 0;
    cin >> n >> m;
    int num = 0;
    cin >> num;
    ListNode *head = new ListNode(num);
    ListNode *p = head;
    for (int i = 0; i < n-1; i++)
    {
        cin >> num;
        p->next = new ListNode(num);
        p = p->next;
    }
    head = removeNthFromEnd(head, m);
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
