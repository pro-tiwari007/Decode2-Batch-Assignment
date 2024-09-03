#include<iostream>
#include<vector>
using namespace std;

class CircularDeque{
public:
    int* deque;
    int size,front,rear;
    CircularDeque(int size){
        deque = new int[size];
        front = -1;
        rear = -1;
        this->size = size;
    }
    bool insertFront(int value){
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else if(front - 1 != rear && front > 0){
            front--;
        }
        else{
            cout<<"Overflow condition!"<<endl;
            return false;
        }
        deque[front] = value;
        return true;
    }

    bool insertLast(int value){
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else if(rear + 1 != front && rear+1 < size){
            rear++;
        }
        else{
            cout<<"Overflow condition!"<<endl;
            return false;
        }
        deque[rear] = value;
        return true;
    }

    bool deleteFront(){
        if(front == -1 || rear == -1){
            return false;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1)%size;
        }
        return true;
    }

    bool deleteLast(){
        if(front == -1 || rear == -1){
            return false;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            rear = size-1;
        }
        else{
            rear = rear-1;
        }
        return true;

    }

    int getFront(){
        if(front != -1){
            return deque[front];
        }
        else{
            return -1;
        }
    }

    int getRear(){
        if(rear != -1){
            return deque[rear];
        }
        else{
            return -1;
        }
    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(rear+1 == front || front - rear == size-1){
            return true;
        }
        else{
            return false;
        }
    }
};


void display(CircularDeque &cd){
    if(cd.front == -1 && cd.rear == -1){
        cout<<"Empty Deque"<<endl;
    }
    else{
        for(int i=cd.front; i != cd.rear; i = (i+1)%(cd.size)){
            cout<< cd.deque[i]<<" ";
        }
        cout<<cd.deque[cd.rear];
        cout<<endl;
    }

}


int main(){ 
    CircularDeque cd(3);
    cout<<cd.insertLast(1)<<endl;
    cout<<cd.insertLast(2)<<endl;
    cout<<cd.insertFront(3)<<endl;
    cout<<cd.insertFront(4)<<endl;
    cout<<cd.getRear()<<endl;
    cout<<cd.isFull()<<endl;
    cd.deleteLast();
    cout<<cd.insertFront(4)<<endl;
    cout<<cd.getFront()<<" "<<endl;
    display(cd);
 return 0;
}