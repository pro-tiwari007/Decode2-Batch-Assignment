#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
void traverse(Node* head) {
    while(head and head->next) {
        cout << head->data << " ";
        head = head->next->next;
    }
}
int main(){ 
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    traverse(head);
 return 0;
}