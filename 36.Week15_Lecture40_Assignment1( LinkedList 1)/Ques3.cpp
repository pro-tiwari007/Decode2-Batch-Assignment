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
    void InsertAtBegin(int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void InsertAtEnd(int data){
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

    void InsertAtIdx(int idx,int data){
        if(idx==0){
            InsertAtBegin(data);
        }
        else if(idx == size-1){
            InsertAtEnd(data);
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index!"<<endl;
        }
        else{
            Node * newNode = new Node(data);
            Node *temp = head;
            int i=0;
            while(i<idx-1){
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }

    void DeleteAtBegin(){
        if(head == NULL){
            cout<<"Linked List is empty!"<<endl;
        }
        else{
            head = head->next;
        }
        size--;
    }

    void DeleteAtEnd(){
        if(head == NULL){
            cout<<"Linked List is empty!"<<endl;
        }
        else{
            Node *temp = head;
            while(temp->next->next!= NULL){
                temp = temp->next;
            }
            temp->next = NULL;
        }
        size--;
    }

    void DeleteAtIdx(int idx){
        if(idx==0){
            DeleteAtBegin();
        }
        else if(idx == size-1){
            DeleteAtEnd();
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index!"<<endl;
        }
        else{
            Node *temp = head;
            int i=0;
            while(i<idx-1){
                temp = temp->next;
                i++;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    int GetAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index!"<<endl;
            return -1;
        }
        Node *temp = head;
        for(int i=0;i<idx;i++){
            temp = temp->next;
        }
        return temp->data;
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


int main(){ 
    LinkedList ll;
    ll.InsertAtEnd(1);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(3);
    ll.InsertAtEnd(4);
    ll.InsertAtEnd(5);
    ll.Display();

return 0;
}