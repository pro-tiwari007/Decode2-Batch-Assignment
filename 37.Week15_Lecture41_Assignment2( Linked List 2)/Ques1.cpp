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

class LinkedList{
    public:
    Node * head;
    int size;
    LinkedList(){
        head = NULL;
    }

    void add(int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    void Display(){
        if(head == NULL){
            cout<<"Linked List is empty!"<<endl;
        }
        else{
            Node  *temp = head;
            while(temp!= NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
};

Node * RemoveMiddleNode( Node * head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast->next != NULL && fast->next->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;
    return head;
}


int main(){ 

    LinkedList ll1;
    ll1.add(1);
    ll1.add(3);
    ll1.add(4);
    ll1.add(7);
    ll1.add(1);
    ll1.add(2);
    ll1.add(6);
    ll1.add(12);
    cout<<"Given linked list::: ";
    ll1.Display();
    ll1.head = RemoveMiddleNode(ll1.head);
    cout<<"After removing middle node, linked list::: ";
    ll1.Display();
    

    

return 0;
}