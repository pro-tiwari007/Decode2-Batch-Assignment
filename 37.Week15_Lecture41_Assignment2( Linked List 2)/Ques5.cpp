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
    Node * head, *startCycle;
    int size;
    LinkedList(){
        head = NULL;
        startCycle = NULL;
    }

    void add(int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            newNode->next = startCycle;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL && temp->next != startCycle){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = startCycle;
        }
        size++;
    }

    void addCycle(int value){
        Node * newNode = new Node(value);
        if(startCycle == NULL){
            startCycle = newNode;
            startCycle->next = startCycle;
        }
        else{
            Node *temp = startCycle;
            while(temp->next != startCycle){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = startCycle;
        }
        size++;
    }

    void Display(){
        if(head == NULL){
            cout<<"Linked List is empty!"<<endl;
        }
        else{
            Node  *temp = head;
            while(temp!= startCycle){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            if(startCycle != NULL){
                cout<<" | "<<startCycle->data<<" ";
                temp = temp->next;
                while(temp!= startCycle){
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
                cout<<"|";
            }
            cout<<endl;
        }
    }

};

int loopLength(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    bool isCycle = false;
    while(fast!= NULL && fast->next!= NULL){
        if(fast == slow){
            isCycle = true;
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    if(!isCycle){
        return 0;
    }
    else{
        slow = slow->next;
        int count = 1;
        while(slow != fast){
            slow = slow->next;
            count++;
        }
        return count;
    }

}


int main(){ 

    LinkedList ll1;
    ll1.add(1);
    ll1.add(2);
    ll1.add(3);
    ll1.addCycle(11);
    ll1.add(4);
    ll1.addCycle(21);
    ll1.addCycle(21);
    ll1.addCycle(15);
    cout<<"Linked List:: ";
    ll1.Display();
    cout<<"Length of loop : "<<loopLength(ll1.head);
    
return 0;
}