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

void CircLinkedList::addItem(string newName, int newNum)
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
        temp->next = head;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
            temp = nullptr;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            temp = nullptr;
        }
        
    }
    

}