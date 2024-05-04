#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int value;
    struct ListNode* next;
    ListNode(int x): value(x), next(nullptr){}
};

ListNode* insert(ListNode* &r, int value){
    ListNode* node = new ListNode(value);
    r->next = node;
    r= r->next;
    return r;
}

void reverse(ListNode* &head){
    ListNode* cur = head->next;
    ListNode* pre = head->next;
    ListNode* next = cur->next;
    pre->next = nullptr;
    while (next != nullptr)
    {
        cur = next;
        next = next->next;
        cur->next = pre;
        pre = cur;
    }
    head->next = cur;
}

void printList(ListNode &head){
    ListNode* p = head.next;
    while (p != nullptr)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
    
}

int main(int argc, char const *argv[])
{
    int n;
    while(cin >> n){
        if(n == 0){
            cout << "list is empty" << endl;
            continue;
        }
        ListNode* head = new ListNode(n);
        ListNode* r = head;
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            r = insert(r , a);
        }
        
        printList(*head);
        reverse(head);
        printList(*head);
    }
    return 0;
}
