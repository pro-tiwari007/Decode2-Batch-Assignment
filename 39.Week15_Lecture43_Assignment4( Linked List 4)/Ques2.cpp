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


Node* mergeNodes(Node *head){
    Node *newHead = new Node(INT_MIN);
    Node *temp = head, *newtemp = newHead;
    bool flagFirstZero = true;
    int sum = 0;
    while(temp != NULL){
        if(temp->data == 0){
            if(flagFirstZero){
                flagFirstZero = false;
            }
            else{
                Node *newNode = new Node(sum);
                newtemp->next = newNode;
                newtemp = newNode;
                sum = 0;
            }
        }
        else{
            sum += temp->data;
        }
        temp = temp->next;
    }
    return newHead->next;
}

int main(){ 
    LinkedList ll1,ll2;
    ll1.add(0);
    ll1.add(1);
    ll1.add(0);
    ll1.add(3);
    ll1.add(0);
    ll1.add(2);
    ll1.add(2);
    ll1.add(0);
    cout<<"Linked List :: ";
    ll1.Display();
    
    ll2.head = mergeNodes(ll1.head);
    cout<<"After merge all nodes between zeroes, Linked List :: ";
    ll2.Display();
return 0;
}