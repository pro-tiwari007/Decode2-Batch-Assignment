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

Node * deleteAllNodescontainData( Node * head,int value){
    while(head != NULL && head->data == value){
        head = head->next;
    }
    Node *temp = head,*prevTemp = NULL;
    while(temp!=NULL){
        if(temp->data != value){
            prevTemp = temp;
            temp = temp->next;
        }
        else{
            temp = temp->next;
            prevTemp->next = temp;
        }
    }
    return head;
}


int main(){ 

    LinkedList ll1;
    ll1.add(1);
    ll1.add(2);
    ll1.add(6);
    ll1.add(3);
    ll1.add(4);
    ll1.add(5);
    ll1.add(6);
    cout<<"Linked List :: ";
    ll1.Display();
    
    int val = 6;
    ll1.head = deleteAllNodescontainData(ll1.head,val);
    cout<<"After removing ("<<val<<"),Linked List :: ";
    ll1.Display();

return 0;
}