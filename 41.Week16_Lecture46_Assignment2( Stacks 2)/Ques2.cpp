#include<iostream>
#include<vector>
#include<algorithm>
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

Node* ReverseList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL, *current = head, *Next = head->next;
    while(current != NULL){
        current->next = prev;
        prev = current;
        current = Next;
        if(Next!=NULL){
            Next = Next->next;
        }
    }
    return prev;
}

vector<int> nextLargerNode(Node* head){
    vector<int> ans;
    stack<int> st;
    head = ReverseList(head);
    Node *temp = head;
    ans.push_back(0);
    st.push(temp->data);
    temp = temp->next;
    while(temp != NULL){
        while(st.size()>0 && st.top()<=temp->data){
            st.pop();
        }
        ans.push_back((st.size()>0)?(st.top()):(0));
        st.push(temp->data);
        temp = temp->next;
    }
    reverse(ans.begin(),ans.end());
    return ans;    
}

int main(){ 

    LinkedList ll1;
    ll1.add(2);
    ll1.add(7);
    ll1.add(4);
    ll1.add(3);
    ll1.add(5);
    cout<<"Linked List :: ";
    ll1.Display();
    vector<int> ans = nextLargerNode(ll1.head);
    cout<<"(Next Greater Node) Linked List :: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    

return 0;
}