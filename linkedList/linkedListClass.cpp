#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    MyLinkedList()
    {
        head = tail = NULL;
        length = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (length == 0)
            head = tail = n;
        else
        {
            tail->next = n;
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
            head = n;
        }
        length++;
    }
 
    void removeAtHead()
    {
        if (length == 0)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
    }

    int size()
    {
        return length;
    }
 
    void insert(int idx, int val)
    {
        if (idx < 0 or idx > length)
        {
            cout << "invalid Index" << endl;
            return;
        }
        if (idx = 0)
        {
            insertAtHead(val);
            return;
        }
        if (idx == length)
        {
            insertAtTail(val);
            return;
        }
        Node *n = new Node(val);
        Node *temp = head;
        for (int i = 1; i <= idx - 1; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }
 
    int get(int idx)
    {
        if (idx < 0 or idx >= length)
        {
            cout << "invalid Index" << endl;
            return;
        }
        Node *temp = head;
        for (int i = 1; i <= idx; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }
 
    void remove(int idx)
    {
        if (idx < 0 or idx >= length)
        {
            cout << "invalid Index" << endl;
            return;
        }
        if (idx == 0)
        {
            removeAtHead();
            return;
        }
        Node* temp= head;
        for(int i=1 ; i<=idx -1; i++){
            temp = temp->next;
        } 
        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        if(idx == length -1) tail =temp;
        delete toBeDeleted;
        length -- ;
    }
};

int main()
{
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtHead(40);
    list.display();
}