#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr){}
        Node() : val(0), next(nullptr){}
    };

    MyLinkedList() {
        this->head = new Node();
        this->size = 0;
    }

    int get(int index) {
        Node* p = this->head;
        if(index >= this->size){
            return -1;
        }
        for(int i = 0; i < index + 1; i++){
            p = p->next;
        }
        return p->val;
    }

    void addAtHead(int val) {
        Node* p = this->head;
        Node* q = head->next;
        Node* node = new Node(val);
        p->next = node;
        node->next = q;
        this->size ++;
    }

    void addAtTail(int val) {
        Node* p = this->head;
        for(int i = 0; i < this->size; i++){
            p = p->next;
        }
        Node* node = new Node(val);
        p->next = node;
        this->size ++;
    }

    void addAtIndex(int index, int val) {
        if(index > this->size){
            return;
        }
        Node * p = this->head;
        for(int i = 0; i < index; i++){
            p = p->next;
        }
        Node* node = new Node(val);
        Node* q = p->next;
        p->next = node;
        node->next = q;
        this->size ++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= this->size || this->size == 0){
            return;
        }
        Node* p = this->head;
        for(int i = 0; i < index ; i++){
            p = p->next;
        }
        Node* q = p->next;
        p->next = p->next->next;
        delete(q);
        this->size --;
    }
private:
    Node* head;
    int size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */



int main(int argc, char const *argv[])
{
    MyLinkedList* myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtIndex(1, 2);
    myLinkedList->addAtIndex(2, 4);
    myLinkedList->deleteAtIndex(1);
    return 0;
}
