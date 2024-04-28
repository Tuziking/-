#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int value;
    struct ListNode *next;
    ListNode(int x): value(x), next(nullptr) {}
};

ListNode* insert(ListNode* &r, int value){
    ListNode* node = new ListNode(value);
    r->next = node;
    return r->next;
}

void printList(ListNode* head){
    ListNode* p = head->next;
    while (p != nullptr)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
    
}

void check(ListNode* &head){
    ListNode* p, *q, *r;
    p = head->next;
    r = head->next;
    q = p->next;
    // r = head;
    while(p != nullptr){
        // cout << q->value << endl;
        if(p->value == q->value){
            r->next = q->next;
            q = q->next;
        } else{
            r = q;
            q = q->next;
        }
        // cout << q->value << endl;
        if(q->next == nullptr){
            p = p->next;
            q = p->next;
            r = p;
        }
        
    }
    printList(head);
}



int main(int argc, char const *argv[])
{
    int n;
    while (cin >> n)
    {
        
        ListNode* head = new ListNode(n);
        ListNode* r = head;
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            r = insert(r, a);
        }
        // printList(head);
        check(head);
        // printList(head);
        
    }
    
    return 0;
}
