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
            cout << "New head =" << head->name << "\n New tail = " << tail->name << endl;
        }
        else
        {
            temp->next = head;
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            cout << "New head =" << head->name << "\n New tail = " << tail->name << "\n Tail next = " << tail->next->name  << "\n Tail prev = " << tail->prev->name << "\n" << endl;
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
        cout << "New head = " << head->name << "\n" << "Tail = " << tail->name << "\n" << endl;
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