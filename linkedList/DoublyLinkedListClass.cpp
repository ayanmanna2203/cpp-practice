#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        next = prev = NULL;
    }
};

class MylinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    MylinkedList()
    {
        head = tail = NULL;
        length = 0;
    }
    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (length == 0)
            head = tail = n;
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
        length++;
    }
     void insertAtHead(int val)
    {
        Node *n = new Node(val);
        if (length == 0)
            head = tail = n;
        else
        {
            n->next = head;
            head->prev = n;
            head = n;
        }
        length++;
    }
   void removeAtHead(){
     if (length == 0) {
        cout<<"No elements to remove";
        return;
     }
        head= head->next;
        head->prev = NULL;
        length -- ;
        
    }
     void removeAtHead(){
     if (length == 0) {
        cout<<"No elements to remove";
        return;
     }
        tail= tail->prev;
        tail->next = NULL;
        length -- ;
        
    }
    void display(){
         Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(){
        return length;
    }
};

int main()
{
    MylinkedList list;
    list.insertAtTail(10);
    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(40);

    // a->next = b; b->prev = a;
    // b->next = c; c->prev = b;
    // c->next = d; d->prev = c;
}