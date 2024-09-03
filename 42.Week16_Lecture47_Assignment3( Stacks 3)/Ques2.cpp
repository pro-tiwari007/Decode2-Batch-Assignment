#include<iostream>
#include<stack>
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


Node * removeNodes( Node * head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *temp = head;
    stack<Node*> st;
    while(temp!= NULL){
        st.push(temp);
        temp = temp->next;
    }
    temp = st.top();
    st.pop();
    while(st.size()>0){
        if(st.top()->data >= temp->data){
            st.top()->next = temp;
            temp = st.top();
        }
        st.pop();
    }
    return temp;
}




int main(){ 
    LinkedList ll1;
    ll1.add(5);
    ll1.add(2);
    ll1.add(13);
    ll1.add(3);
    ll1.add(8);
    cout<<"Linked List :: ";
    ll1.Display();
    
    ll1.head = removeNodes(ll1.head);
    cout<<"After removing nodes, Linked List :: ";
    ll1.Display();
    

    

return 0;
}