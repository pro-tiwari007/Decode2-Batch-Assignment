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

Node* deleteDuplicates(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* tempHead = new Node(-1), *join = tempHead, *current = head->next, *prev = head;
    while(current != NULL){
        if(prev->data != current->data){
            join->next = prev;
            join = prev;
            prev = current;
            current = current->next;
        }
        else{
            while(current != NULL && current->data == prev->data){
                current = current->next;
            }
            join->next = current;
            prev = current;
            if(current != NULL){
                current = current->next;
            }
        }
    }
    return tempHead->next;
}


int main(){ 
    LinkedList ll1, ll2;
    ll1.add(1);
    ll1.add(2);
    ll1.add(3);
    ll1.add(3);
    ll1.add(4);
    ll1.add(4);
    ll1.add(5);
    cout<<"Linked List:: ";
    ll1.Display();
    ll2.head = deleteDuplicates(ll1.head);
    cout<<"After removing duplicates, Linked List:: ";
    ll2.Display();
return 0;
}