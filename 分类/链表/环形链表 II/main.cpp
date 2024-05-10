#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    if(head == NULL){
        return nullptr; 
    }
    ListNode* slow, *fast;
    slow = head;
    fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            ListNode* index1 = slow;
            ListNode* index2 = head;
            while (slow != head)
            {
                slow = slow->next;
                head = head->next;
            }
            return head;   
        }
    }
    return NULL;
    
}

int main(int argc, char const *argv[])
{
    
    return 0;
}