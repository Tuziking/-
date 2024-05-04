#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int value;
    struct ListNode *next;
    ListNode(int x): value(x), next(nullptr) {}
};

ListNode* insert(ListNode* r, int value){
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

void check(ListNode* head){
//    ListNode* p, *q, *r;
//    p = head->next;
//    r = head->next;
//    q = p->next;
//    // r = head;
//    while(p->next){
//        // cout << q->value << endl;
//        if(p->value == q->value){
//            r->next = q->next;
//            auto tmp = q;
//            q = q->next;
////            cout << tmp->value << " ";
//            delete tmp;
//        } else{
//            r = q;
//            q = q->next;
//        }
//        // cout << q->value << endl;
//        if(!q->next){
//            p = p->next;
//            q = p->next;
//            r = p;
//        }
//
//
//    }
//    if (p->value == head->next->value)
//    {
//        head->next->next = nullptr;
//    }
//    ListNode* h = head->next;
//    while (h != nullptr)
//    {
//        cout << h->value << " ";
//        h = h->next;
//    }
//    cout << endl;
//    printList(head);
    auto *p = head->next;
    auto *q = p -> next;
    while(q) {
        if(q->value != p->value) {
            p->next = q;
            p = q;
            q = q->next;
        } else {
            auto tmp = q;
            q = q->next;
            delete tmp;
        }
    }
    p->next = nullptr;
    printList(head);
}

void deleteList(ListNode* head){
    ListNode* p = head->next;
    while (p != nullptr)
    {
        auto tmp = p;
        p = p->next;
        delete tmp;
    }
    delete head;
}



int main(int argc, char const *argv[])
{
    int n;
    while (cin >> n)
    {
        if( n == 0){
            cout << "list is empty" << endl;
            continue;
        }
        ListNode* head = new ListNode(n);
        ListNode* r = head;
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            r = insert(r, a);
        }
//        if(n == 2){
//            if(head->next->value == head->next->next->value){
//                head->next->next = nullptr;
//            }
//            cout << head->next->value << endl;
//            continue;
//        }
//        if ( n == 1)
//        {
//            cout << head->next->value << endl;
//            continue;
//        }
        printList(head);
        check(head);
        deleteList(head);
        // printList(head);

    }

    return 0;
}
