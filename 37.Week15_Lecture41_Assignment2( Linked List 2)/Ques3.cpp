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


Node * SwappingKthNode( Node * head,int k){
    if(head == NULL || head->next ==NULL){
        return head;
    }
    Node *tempA = head;
    int n=0;
    while(tempA!=NULL){
        tempA = tempA->next;
        n++;
    }
    Node *tempB = head;
    for(int i=0;i<n-2*k+1;i++){
        tempB = tempB->next;
    }
    tempA = head;
    for(int i=0;i<k-1;i++){
        tempA = tempA->next;
        tempB = tempB->next;
    }
    swap(tempA->data,tempB->data);
    return head;
}


int main(){ 

    LinkedList ll1;
    ll1.add(1);
    ll1.add(2);
    ll1.add(7);
    ll1.add(3);
    ll1.add(4);
    ll1.add(5);
    ll1.add(6);
    cout<<"Linked List: ";
    ll1.Display();
    int k = 2;
    cout<<"After swapping "<<k<<"-position nodes from begin and end,\nLinked List: ";
    ll1.head = SwappingKthNode(ll1.head,k);
    ll1.Display();
    

    

return 0;
}