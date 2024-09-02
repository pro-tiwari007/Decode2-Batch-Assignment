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

Node* reorderOddEvenList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* oddIdx = head, *evenIdx = head->next,*temp = evenIdx->next,*rightHead = evenIdx;

    while(temp != NULL){
        oddIdx->next = temp;
        oddIdx = temp;
        temp = temp->next;
        if(temp != NULL){
            evenIdx->next = temp;
            evenIdx = temp;
            temp = temp->next;
        }        
    }
    oddIdx->next = rightHead;
    evenIdx->next = NULL;
    return head;
}


int main(){ 
    LinkedList ll1;
    ll1.add(1);
    ll1.add(2);
    ll1.add(3);
    ll1.add(4);
    ll1.add(5);
    cout<<"Linked List :: ";
    ll1.Display();
    ll1.head = reorderOddEvenList(ll1.head);
    cout<<"After reordering, Linked List :: ";
    ll1.Display();
return 0;
}