#include<iostream>
#include<climits>
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

Node* insertionSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *tempHead = new Node(INT_MIN),*temp = NULL,*current,*prev;
    while(head != NULL){
        prev = temp;
        temp = tempHead;
        while(temp != NULL && temp->data <= head->data){
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        prev = prev->next;
        head = head->next;
        prev->next = temp;
    }
    return tempHead->next;
}


int main(){ 
    LinkedList ll1;
    ll1.add(4);
    ll1.add(2);
    ll1.add(1);
    ll1.add(3);
    cout<<"Linked List :: ";
    ll1.Display();
    ll1.head = insertionSort(ll1.head);
    cout<<"After sorting, Linked List :: ";
    ll1.Display();
return 0;
}