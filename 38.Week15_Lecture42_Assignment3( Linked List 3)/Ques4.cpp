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

Node* addTwoNumbers(Node* head1, Node* head2){
    if(head2 == NULL){
        return head1;
    }
    else if(head1 == NULL){
        return head2;
    }
    Node* sum = new Node(0);
    Node *num1 = head1, *num2 = head2,*temp = sum;
    int ans,carry = 0;
    while(num1 != NULL || num2 != NULL){
        ans = (((num1)?(num1->data):(0)) + ((num2)?(num2->data):(0)) + carry);
        Node *digit = new Node(ans%10);
        temp->next = digit;
        temp = digit;
        carry = ans/10;
        if(num1){
            num1 = num1->next;
        }
        if(num2){
            num2 = num2->next;
        }
    }
    if(carry == 1){
        Node *digit = new Node(1);
        temp->next = digit;
        temp = digit;
    }
    return sum->next;
}


int main(){ 
    LinkedList ll1,ll2;
    ll1.add(2);
    ll1.add(4);
    ll1.add(3);
    cout<<"Input 1: ";
    ll1.Display();

    ll2.add(5);
    ll2.add(6);
    ll2.add(4);
    cout<<"Input 2: ";
    ll2.Display();
    ll1.head = addTwoNumbers(ll1.head, ll2.head);
    cout<<"Sum : ";
    ll1.Display();
return 0;
}