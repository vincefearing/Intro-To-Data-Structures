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

// Add node/item to end of list
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
        }
        else
        {
            temp->next = head;
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        temp = nullptr;
    }
}

//Remove given Node/item from the list
void CircLinkedList::removeItem(int position)
{
    Node * current = nullptr;
    Node * temp = nullptr;

    if (head == nullptr)
    {
        cout << "List is empty" << endl;
    }

    if (head->num == position)
    {
        current = head;
        head = head->next;
        head->prev = nullptr;
        tail->next = head;
        current->next = nullptr;
        current->prev = nullptr;
        delete current;
    }
    else if(tail->num == position)
    {
        current = tail;
        tail = tail->prev;
        tail->next = head;
        current->next = nullptr;
        current->prev = nullptr;
        delete current;
    }
    else
    {
        current = head;
        while(current->num != position && current != tail)
        {
            current = current->next;
        }
        if (current == tail)
        {
            cout << "\n Record not found and was not deleted" << endl;
        }

        temp = current;
        current = current->prev;
        current->next = temp->next;
        current = temp->next;
        current->prev = temp->prev;
        temp->prev = nullptr;
        temp->next = nullptr;
        delete temp;
    }
    //printList();
}

void CircLinkedList::printList()
{
    Node *current = head;

    if(head == nullptr)
    {
        return;
    }

    do
    {
        cout << current->num << ". " << current->name << endl;
        current = current->next;
    } while (current!= head);
}

void CircLinkedList::reversePrintList()
{
    Node *current = tail;

    if (head == nullptr)
    {
        return;
    }

    while (current != nullptr)
    {
        cout << current->num << ". " << current->name << endl;
        current = current->prev;
    }
    
}

void CircLinkedList::gameLoop(int passNum, int players)
{
    Node *pos = head;
    Node *deleted;
    int removePos = 0;

    if (players == 1)
    {
        cout << pos->name << "\n wins!" << endl;
    }

    while (players > 1)
    {
        //Passing the potato x number of times starting with current player
        for (int i = 0; i < passNum; ++i)
        {
            pos = pos->next;
            //cout << "Current = " << pos->name << "\n";
        }
        deleted = pos;
        cout << deleted->name << "\n at position " << deleted->num << " is eliminated\n\n";
        pos = pos->next;
        //cout << "Current = " << pos->name << "\n";
        removePos = deleted->num;
        removeItem(removePos);
        players--;
        if (players == 1)
        {
            cout << pos->name << " is the winner!\n\n";
        }
    }
}

//Delete list for destructor
void CircLinkedList::deleteList()
{
    Node *current = head;
    Node *temp = nullptr;

    if (head == nullptr)
    {
        return;
    }
    if (head->next == head)
    {
        delete head;
        cout << "\nDeleting: " << current->name << endl;
        current = nullptr;
    }

    while (current != head && current != nullptr)
    {
        temp = current->next;
        delete current;
        cout << "\nDeleting: " << current->name << endl;
        current = temp;
    }
    head = nullptr;
    tail = nullptr;
    current = nullptr;
    temp = nullptr;
        
}

CircLinkedList::~CircLinkedList()
{
    deleteList();
}