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
Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL, *current = head, *Next = head->next;
    while(current != NULL){
        current->next = prev;
        prev = current;
        current = Next;
        if(Next != NULL){
            Next = Next->next;
        }
    }
    return prev;
}

Node* reverseKgroups(Node *head,int k){
    Node *tempHead = NULL,*temp = head,*prev = NULL,*start = head,*end = prev;
    while(temp != NULL){
        bool flag = true;
        for(int i=0;i<k;i++){
            if(temp == NULL){
                flag = false;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        if(!flag){
            break;
        }
        prev->next = NULL;
        if(tempHead == NULL){
            tempHead = reverse(start);
            start->next = temp;
            end = start;
            start = temp;
        }
        else{
            end->next = reverse(start);
            end = start;
            start->next = temp;
            start = temp;
        }
    }
    return (tempHead)?(tempHead):(head);
}

int main(){ 
    LinkedList ll1,ll2;
    ll1.add(1);
    ll1.add(2);
    ll1.add(3);
    ll1.add(4);
    ll1.add(5);
    cout<<"Linked List :: ";
    ll1.Display();
    int k = 2;
    ll2.head = reverseKgroups(ll1.head,k);
    cout<<"After reversing "<<k<<" nodes at a time, Linked List :: ";
    ll2.Display();
return 0;
}