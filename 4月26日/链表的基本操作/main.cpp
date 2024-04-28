#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int num;
    struct ListNode* next;
    ListNode(int x) : num(x), next(nullptr) {}
};

ListNode * insertByHead(ListNode* &head, int value) {
    ListNode* node = new ListNode(value);
    node->next = head->next;
    head->next = node;
    return head;
}

void deleteNode(ListNode* &head, int index) {
    ListNode* p = head;
    // cout << "p: " << p->num << endl;
    // cout << "p: " << p->next->num << endl;
    for (size_t i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ListNode* temp = p->next;
    p->next = p->next->next;
    delete(temp);
}

int getNodeValue(ListNode* &head, int index) {
    ListNode* p = head;
    for (size_t i = 0; i < index; i++)
    {
        p = p->next;
    }
    return p->num;
    
}

void insertNode(ListNode* &head, int index, int value){
    ListNode* node = new ListNode(value);
    ListNode* p = head;
    for (size_t i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ListNode* q = p->next;
    node->next = q;
    p->next = node;
}

int getNodeCount(ListNode* &head) {
    int count = 0;
    ListNode* p = head->next;
    while (p != nullptr)
    {
        p = p->next;
        count++;
    }
    return count;
    
}

void printNode(ListNode* &head){
    ListNode* p = head->next;
    while(p != nullptr){
        cout << p->num << " ";
        p = p->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ListNode* head = new ListNode(0);
    for (size_t i = n; i > 0; i--)
    {
        int a;
        cin >> a;
        insertByHead(head, a);
    }
    int m;
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        string line;
        getline(cin>>ws, line);
        istringstream iss(line);
        string operation;
        iss >> operation;
        if(operation == "show"){
            if(head->next == nullptr){
                cout << "Link list is empty" << endl;
            } else{
                printNode(head);
            }
        } else if (operation == "delete"){
            int a;
            iss >> a;
            // cout << getNodeCount(head) << endl;
            if(getNodeCount(head) == 0){
                cout << "delete fail" << endl;
                continue;
            }
            if(getNodeCount(head) >= a){
                deleteNode(head,a);
                cout << "delete OK" << endl;
            }else{
                cout << "delete fail" << endl;
            }
        } else if (operation == "get")
        {
            int a;
            iss >> a;
            if(getNodeCount(head) == 0){
                cout << "get fail" << endl;
                continue;
            }
            if(getNodeCount(head) >= a){
                cout << getNodeValue(head, a) << endl;
            }else{
                cout << "get fail" << endl;
            }
        } else if (operation == "insert"){
            int index, value;
            iss >> index >> value;
            if(getNodeCount(head) >= index - 1){
                insertNode(head, index, value);
                cout << "insert OK" << endl;
            }else{
                cout << "insert fail" << endl;
            }
        }
    }
    
    
    return 0;
}
