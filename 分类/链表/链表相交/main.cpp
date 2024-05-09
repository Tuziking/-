#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if( headA == nullptr || headB == nullptr){
        return nullptr;
    }
    ListNode *p, *q, *r;
    p = headA;
    q = headB;
    bool flag1, flag2;
    flag1 = false;
    flag2 = false;
    int num1 = 0;
    int num2 = 0;
    while (p->next != nullptr){
        p = p->next;
        num1++;
    }
    p = headA;
    while (q->next != nullptr){
        q = q->next;
        num2++;
    }
    q = headB;
    int num = 0;
    if ( num1 > num2){
        flag1 = true;
        num = num1 - num2;
    }else{
        flag1 = false;
        num = num2 - num1;
    }
    if(flag1){
        for(int i = 0; i < num; i ++){
            p = p->next;
        }
    }else{
        for(int i = 0; i < num; i ++){
            q = q->next;
        }
    }
    while(q != nullptr){
        if(q == p && !flag2){
            flag2 = true;
            r = q;
        }else if (q != p){
            flag2 = false;
        }
        q = q->next;
        p = p->next;
    }
    if(flag2){
        return r;
    }else{
        return nullptr;
    }
}

int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int num;
    cin >> num;
    ListNode* head1 = new ListNode(num);
    ListNode* p1 = head1;
    for (size_t i = 0; i < n1 - 1; i++)
    {
        cin >> num;
        p1->next = new ListNode(num);
        p1 = p1->next;
    }
    cin >> num;
    ListNode* head2 = new ListNode(num);
    ListNode* p2 = head2;
    for (size_t i = 0; i < n2 - 1; i++)
    {
        cin >> num;
        p2->next = new ListNode(num);
        p2 = p2->next;
    }
    cin >> num;
    ListNode* head3 = new ListNode(num);
    p2->next = head3;
    p1->next = head3;
    ListNode* p3 = head3;
    for (int i = 0; i < n3 - 1; ++i) {
        cin >> num;
        p3->next = new ListNode(num);
        p3 = p3->next;
    }
    cout << getIntersectionNode(head1, head2)->val << endl;
    return 0;
}
