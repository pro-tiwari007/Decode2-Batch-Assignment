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

Node * mergeInBetween( Node * head1,int a, int b, Node* head2){
    Node *tempA = head1;
    Node *tempB = head1;
    for(int i=0;i<(b-a+1);i++){
        tempB = tempB->next;
    }
    for(int i=0;i<a-1;i++){
        tempA = tempA->next;
        tempB = tempB->next;
    }
    tempB = tempB->next;
    tempA->next = head2;
    while(tempA->next!=NULL){
        tempA = tempA->next;
    }
    tempA->next = tempB;
    return head1;
}


int main(){ 

    LinkedList ll1;
    ll1.add(0);
    ll1.add(1);
    ll1.add(2);
    ll1.add(3);
    ll1.add(4);
    ll1.add(5);
    cout<<"Linked List 1:: ";
    ll1.Display();
    
    
    LinkedList ll2;
    ll2.add(1000000);
    ll2.add(1000001);
    ll2.add(1000002);
    cout<<"Linked List 2:: ";
    ll2.Display();
    
    ll1.head = mergeInBetween(ll1.head,3,4,ll2.head);
    cout<<"After merging,Linked List :: ";
    ll1.Display();
    

    

return 0;
}