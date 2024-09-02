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

Node* reverseList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL,*current = head, *Next = head->next;
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
int getDecimalValue(Node* head){
    head = reverseList(head);
    Node*temp = head;
    int ans = 0, k=1;
    while(temp != NULL){
        if(temp->data == 1){
            ans += k;
        }
        k = k*2;
        temp = temp->next;
    }
    return ans;
}


int main(){ 
    LinkedList ll1;
    ll1.add(1);
    ll1.add(0);
    ll1.add(1);
    cout<<"Binary Represenation:: ";
    ll1.Display();
    cout<<"Decimal value : "<<getDecimalValue(ll1.head);
return 0;
}