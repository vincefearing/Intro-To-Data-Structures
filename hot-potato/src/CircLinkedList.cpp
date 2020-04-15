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
    Node * current = head;
    Node * temp;

    if (head->num == position)
    {
        current = head->next;
        temp = head;
        head = current;
        head->prev = nullptr;
        tail->next = head;
        delete temp;
    }
    else
    {
        current = current->next;
        while (current->num != position && current != head)
        {
            current = current->next;
        }

        if (current->num == position)
        {
            temp = current;
            current = current->prev;
            current->next = temp->next;
            if (temp == tail)
            {
                tail = current;
                tail->next = head;
            }
            delete temp;
            temp = nullptr;
            /*cout << "Head = " << head->name << "\n" << "Tail = " << tail->name << "\n" << "Tail prev = " << tail->prev->name << "\nTail next = " << tail->next->name << endl;*/
        }
        else
        {
            cout << "\nItem not found and wasn't deleted" << endl;
        }   
    }
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
    Node *current = head;
    Node *temp;
    while (players > 0)
    {
        for (int i = passNum; i <= 0; --i)
        {
            current = current->next;
        }
        temp = current;
        current = current->next;
        cout << temp->name << " at position " << temp->num << " is eliminated\n\n";
        if (players == 1)
        {
            cout << temp->name << " is the winner!\n\n";
        }
        removeItem(temp->num);
        players--;
    }
}