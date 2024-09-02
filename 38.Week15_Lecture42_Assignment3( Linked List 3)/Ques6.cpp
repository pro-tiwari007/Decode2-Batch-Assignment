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

int pairSum(Node* head){
    Node*slow = head, *fast = head->next;
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *newList = reverse(slow->next);
    slow->next = NULL;
    int maxValue = INT_MIN;
    while(head != NULL){
        maxValue = max(maxValue,(head->data + newList->data));
        head = head->next;
        newList = newList->next;
    }
    return maxValue;
}


int main(){ 
    LinkedList ll1;
    ll1.add(5);
    ll1.add(4);
    ll1.add(2);
    ll1.add(1);
    cout<<"Linked List :: ";
    ll1.Display();
    cout<<"Maximum twin-sum: "<<pairSum(ll1.head);
return 0;
}