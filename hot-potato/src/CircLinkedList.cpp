#include "../include/CircLinkedList.h"

//Node's default constructor
CircLinkedList::Node::Node()
{
    next = nullptr;
    prev = nullptr;
}

//Default Constructor
CircLinkedList::CircLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void CircLinkedList::append(string newName, int newNum)
{
    Node *temp = new (nothrow) Node;
    if (temp == nullptr)
    {
        cout << "Node failed to allocate memory \n";
    }
    else
    {
        temp->name = newName;
        temp->num = newNum;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
            temp = nullptr;
            cout << "New head =" << head->name << "\n New tail = " << tail->name << endl;
        }
        else
        {
            temp->next = head;
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            temp = nullptr;
            cout << "New head =" << head->name << "\n New tail = " << tail->name << "\n Tail next = " << tail->next->name  << "\n Tail prev = " << tail->prev->name << "\n" << endl;
    }
        }
    

}